#ifndef PLAY_2P_H
#define PLAY_2P_H
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

class PLAY_2P : public QWidget
{
    Q_OBJECT

public:

    explicit PLAY_2P(QWidget *parent = nullptr);
    void INTERFACE_2P();


private:

    QLabel * TITRE;
    QPushButton * RESET;
    QPushButton * Quit1;

};

#endif // PLAY_2P_H
