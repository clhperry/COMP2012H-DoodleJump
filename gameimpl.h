#ifndef GAMEIMPL_H
#define GAMEIMPL_H

#include <QLabel>
#include <QPushButton>
#include <QStatusBar>

class Block;
class MainCharacter;

class GameImpl
{

public:
    GameImpl(QLabel *backgroundLabel, QStatusBar *statusBar);
    void addComponent(const std::string &type, const QPoint& topLeft, const QPoint& bottomRight);
    void deleteComponent();
    void checkDeath();
    std::vector<Block*> getPool();


private:
    std::vector<Block*> pool;
    MainCharacter* mc;
    QStatusBar* statusBar; // To show score
    void backgroundInit(); // Set background color or add a pic


};

#endif // GAMEIMPL_H
