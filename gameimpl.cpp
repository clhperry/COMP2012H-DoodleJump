#include "gameimpl.h"
#include "helper.h"
#include "maincharacter.h"
#include "platform.h"

GameImpl::GameImpl(QLabel *backgroundLabel, QStatusBar *statusBar) {

}

void
GameImpl::addComponent(const std::string &type, const QPoint& topLeft, const QPoint& bottomRight) {
    //std::string name = helper::generateName(this->pool,type);
    if (type == "Platform") {
        Block* p = new Platform(topLeft, bottomRight,this);
        pool.push_back(p);
    }

    if (type == "Maincharacter") {
        this->mc = new MainCharacter(topLeft, bottomRight, this);
    }
}

void
GameImpl::deleteComponent() {
    if (pool.empty())
        return;
    if (pool.front()->getRect().y() >= 700) {
        pool.erase(pool.begin());
        GameImpl::deleteComponent();
    }
}

void
GameImpl::checkDeath() {
    if (mc->getRect().y() >= 700) {
        if (mc->getDead() == false) {
            mc->setDead(true);
        }
    }
}

std::vector<Block*>
GameImpl::getPool() {
    return pool;
}
