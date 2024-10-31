#ifndef MENU_PLAYER_H
#define MENU_PLAYER_H
#include "PLAY_2P.h"
#include "PLAY_3P.h"
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

class MENU_PLAYER : public QWidget
{
    Q_OBJECT


public:

    explicit MENU_PLAYER(QWidget *parent = nullptr);
    void start();

private slots :

    void PL_2P();
    void PL_3P();

private:

    QLabel * nbrJ;
    QPushButton * TwoP;
    QPushButton *ThreeP;
    QPushButton * Quit1;
    PLAY_2P *menu2P;
    PLAY_3P *menu3P;



};

#endif // MENU_PLAYER_H
