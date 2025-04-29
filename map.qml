import QtLocation 5.6
import QtPositioning 5.6
import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    width: 640
    height: 480

    Plugin {
        id: mapPlugin
        name: "osm"
    }

    Map {
        id: mapView
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(36.81171298292549, 10.16309292111914)
        zoomLevel: 12

        MouseArea {
            anchors.fill: parent
            acceptedButtons: Qt.LeftButton | Qt.RightButton
            property bool dragging: false
            property real lastX: 0
            property real lastY: 0

            onPressed: (mouse) => {
                dragging = true
                lastX = mouse.x
                lastY = mouse.y
            }

            onPositionChanged: (mouse) => {
                if (dragging) {
                    var dx = lastX - mouse.x
                    var dy = lastY - mouse.y
                    var newCenter = mapView.center
                    newCenter.latitude += dy * 0.003
                    newCenter.longitude -= dx * 0.003
                    mapView.center = newCenter
                    lastX = mouse.x
                    lastY = mouse.y
                }
            }

            onReleased: {
                dragging = false
            }

            onWheel: (wheel) => {
                if (wheel.angleDelta.y > 0) {
                    mapView.zoomLevel += 1
                } else {
                    mapView.zoomLevel -= 1
                }
            }
        }
    }

    // UI: Input fields and button
    Column {
        spacing: 8
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: 10

        Rectangle {
            width: 180
            height: 30
            color: "white"
            border.color: "#cccccc"
            TextField {
                id: latInput
                anchors.fill: parent
                placeholderText: "Latitude"
            }
        }

        Rectangle {
            width: 180
            height: 30
            color: "white"
            border.color: "#cccccc"
            TextField {
                id: lngInput
                anchors.fill: parent
                placeholderText: "Longitude"
            }
        }

        Button {
            text: "Ajouter Position"
            width: 180
            onClicked: {
                var lat = parseFloat(latInput.text)
                var lng = parseFloat(lngInput.text)

                if (!isNaN(lat) && !isNaN(lng)) {
                    var marker = markerComponent.createObject(mapView, {
                        coordinate: QtPositioning.coordinate(lat, lng)
                    })
                    mapView.addMapItem(marker)
                } else {
                    console.log("Latitude ou longitude invalide")
                }
            }
        }
    }

    // Le composant pour le marker
    Component {
        id: markerComponent
        MapQuickItem {
            id: marker
            anchorPoint.x: image.width / 2
            anchorPoint.y: image.height
            coordinate: QtPositioning.coordinate(0, 0)
            sourceItem: Rectangle {
                width: 16
                height: 16
                color: "red"
                radius: 8
            }

        }
    }

    // Fonction JS (optionnel si tu veux centrer la map)
    function setCenter(lat, lng) {
        mapView.center = QtPositioning.coordinate(lat, lng)
    }
}
