#include "statsdialog.h"
#include <QVBoxLayout>

StatsDialog::StatsDialog(QWidget *parent) : QDialog(parent) {
    tabWidget = new QTabWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(tabWidget);
    resize(800, 600);
}

void StatsDialog::setData(const QMap<QString, QMap<QString, int>>& statsData) {
    for (auto it = statsData.begin(); it != statsData.end(); ++it) {
        const QString &title = it.key();
        const QMap<QString, int> &data = it.value();

        QChartView *chartView;
        if (title.contains("âge") || title.contains("année")) {
            chartView = creerBarChart(title, data);
        } else {
            chartView = creerPieChart(title, data);
        }

        tabWidget->addTab(chartView, title);
    }
}

// Implémenter creerBarChart() et creerPieChart() ici (similaires à vos versions existantes)
QChartView* StatsDialog::creerBarChart(const QString& titre, const QMap<QString, int>& donnees) {
    QBarSeries *series = new QBarSeries();
    QBarSet *set = new QBarSet(titre);

    QStringList categories;
    for (auto it = donnees.begin(); it != donnees.end(); ++it) {
        *set << it.value();
        categories << it.key();
    }

    series->append(set);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(titre);
    chart->createDefaultAxes();

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->setAxisX(axisX, series);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}

QChartView* StatsDialog::creerPieChart(const QString& titre, const QMap<QString, int>& donnees) {
    QPieSeries *series = new QPieSeries();
    for (auto it = donnees.begin(); it != donnees.end(); ++it) {
        series->append(it.key(), it.value());
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(titre);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}
