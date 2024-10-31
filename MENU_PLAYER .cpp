#include "menu_player.h"
#include "PLAY_2P.h"
#include "PLAY_3P.h"
#include "qobjectdefs.h"
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

MENU_PLAYER::MENU_PLAYER(QWidget *parent) : QWidget(parent) {
}

void MENU_PLAYER:: start(){


    nbrJ = new QLabel (" SELECT NUMBERS OF PLAYERS ", this);
    TwoP = new QPushButton ("2 PLAYERS" , this);
    ThreeP = new QPushButton (" 3 PLAYERS" , this);
    Quit1 = new QPushButton ( " QUIT " , this);


    connect(Quit1, SIGNAL(clicked()), this, SLOT(close()));
    connect(TwoP, SIGNAL(clicked()), this, SLOT(PL_2P()));
    connect(ThreeP, SIGNAL(clicked()), this, SLOT(PL_3P()));



    QHBoxLayout * titreP = new QHBoxLayout();
    titreP->addStretch();
    titreP->addWidget(nbrJ);
    titreP->addStretch();

    QHBoxLayout * TWO_PLAYER = new QHBoxLayout();
    TWO_PLAYER -> addWidget(TwoP);

    QHBoxLayout * THREE_PLAYER = new QHBoxLayout();
    THREE_PLAYER -> addWidget(ThreeP);

    QHBoxLayout * QUIT = new QHBoxLayout();
    QUIT -> addWidget(Quit1);

    QVBoxLayout * MENUP = new QVBoxLayout(this);

    MENUP -> addLayout(titreP);
    MENUP -> addLayout(TWO_PLAYER);
    MENUP -> addLayout(THREE_PLAYER);
    MENUP -> addLayout(QUIT);

    setLayout(MENUP);

}

void MENU_PLAYER:: PL_2P(){

    menu2P = new PLAY_2P;
    menu2P -> show();
    menu2P -> INTERFACE_2P();

}


void MENU_PLAYER:: PL_3P(){

    menu3P = new PLAY_3P;
    menu3P -> show();
    menu3P -> INTERFACE_3P();

}

