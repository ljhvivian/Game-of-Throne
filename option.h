#ifndef OPTION_H
#define OPTION_H

#include <QDialog>

namespace Ui {
class Option;
}

class Option : public QDialog
{
    Q_OBJECT

public:
    explicit Option(QWidget *parent = 0);
    ~Option();
    void paintEvent(QPaintEvent *e);
    void setScore(int i){_score=i;}

private slots:
    void on_pushButton_clicked();
    bool getContinue(){return _continue;}
    void on_pushButton_2_clicked();

private:
    Ui::Option *ui;
    bool _continue;
    int _score;
};

#endif // OPTION_H
