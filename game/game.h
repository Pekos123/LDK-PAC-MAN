#include <color.cpp>

Entity::Entity()
{
    sprite.color = Color4::White;
    sprite.width = 14;
    sprite.height = 14;
    sprite.angle = 0;

    speed = 60;
}