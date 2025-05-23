#include "flying.h"

flying::flying(qreal size,const QString &imagesPath,QGraphicsItem *parent) {}
int flying::getHP()
{
    return HP;
}

int flying::getAttackrange()
{
    return AttackRange;
}

int flying::getDamage()
{
    return Damage;
}

int flying::getMobility()
{
    return Mobility;
}

int flying::getPlayerWon()
{
    return playerOwn;
}
