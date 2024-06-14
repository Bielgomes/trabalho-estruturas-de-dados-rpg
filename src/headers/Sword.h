#pragma once

#include "Weapon.h"
#include "Player.h"

class Sword : public Weapon {
    private:
        // Variables
        Player* _entity;

        // Private Functions
        void initVariables();
        void initTexture();
        void initSprite();

    public:
        // Constructor and Destructor
        Sword(Player* entity);
        virtual ~Sword();

        // Functions
        int getDamage();

        void update();
        void render(sf::RenderTarget& target);
};