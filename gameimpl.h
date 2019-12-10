#ifndef GAMEIMPL_H
#define GAMEIMPL_H

#include <QLabel>
#include <QPushButton>
#include <QStatusBar>

class Platform;
class MainCharacter;

class GameImpl
{

public:
    GameImpl(QLabel *backgroundLabel, QStatusBar *statusBar);
    void addComponent(const std::string &name, QRect(const QPoint& topLeft, const QPoint& bottomRight));
    void deleteComponent(const std::string &name);
    void checkCollision( );
    void displayScore( );


private:
    bool dead;
    QStatusBar* statusBar; // To show score
    void backgroundInit(); // Set background color or add a pic


};

#endif // GAMEIMPL_H
