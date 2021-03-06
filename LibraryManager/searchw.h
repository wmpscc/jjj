#ifndef SEARCHW_H
#define SEARCHW_H

#include <QMainWindow>

namespace Ui {
class SearchW;
}

class SearchW : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchW(QWidget *parent = nullptr);
    ~SearchW();

private slots:
    void on_button_query_clicked();
    void paintEvent(QPaintEvent *event);
private:
    Ui::SearchW *ui;
signals:
    void sendData(QString, int);

};

#endif // SEARCHW_H
