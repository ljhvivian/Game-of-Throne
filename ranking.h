#ifndef RANKING_H
#define RANKING_H
#include <QDialog>

namespace Ui {
class Ranking;
}

class Ranking : public QDialog
{
    Q_OBJECT

public:
    explicit Ranking(QWidget *parent = 0);
    ~Ranking();
    void paintEvent(QPaintEvent *e);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Ranking *ui;
};

#endif // RANKING_H
