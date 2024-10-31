#ifndef PLAY_3P_H
#define PLAY_3P_H
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

class PLAY_3P : public QWidget
{
    Q_OBJECT
public:

    explicit PLAY_3P(QWidget *parent = nullptr);
    void INTERFACE_3P();



private:

    QLabel * TITRE;
    QPushButton * RESET;
    QPushButton * Quit1;




};

#endif // PLAY_3P_H
