#ifndef STATSDIALOG_H
#define STATSDIALOG_H

#include <QDialog>
#include <QtCharts>
#include <QTabWidget>

class StatsDialog : public QDialog {
    Q_OBJECT
public:
    explicit StatsDialog(QWidget *parent = nullptr);
    void setData(const QMap<QString, QMap<QString, int>>& statsData);

private:
    QTabWidget *tabWidget;
    QChartView* creerBarChart(const QString& titre, const QMap<QString, int>& donnees);
    QChartView* creerPieChart(const QString& titre, const QMap<QString, int>& donnees);
};

#endif // STATSDIALOG_H
