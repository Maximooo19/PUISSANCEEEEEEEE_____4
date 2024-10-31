#include "qobjectdefs.h"
#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

PLAY_2P::PLAY_2P(QWidget *parent) : QWidget(parent) {
}

void PLAY_2P:: INTERFACE_2P(){

    TITRE = new QLabel (" POWER 4 ", this);
    RESET = new QPushButton (" RESET ", this);
    Quit1 = new QPushButton ( " QUIT " , this);

    connect(Quit1, SIGNAL(clicked()), this, SLOT(close()));

    QHBoxLayout * titre = new QHBoxLayout();
    titre -> addStretch();
    titre -> addWidget(TITRE);
    titre -> addStretch();

    QHBoxLayout * RQ = new QHBoxLayout();
    RQ -> addWidget(RESET);
    RQ -> addWidget(Quit1);


    QVBoxLayout * JEU = new QVBoxLayout(this);
    JEU -> addLayout(titre);
    JEU -> addLayout(RQ);


    setLayout(JEU);

}


