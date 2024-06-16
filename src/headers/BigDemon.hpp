#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Animated.hpp"
#include "Enemy.hpp"
#include "Player.hpp"

enum EnemyAnimationState {
    E_IDLE,
    E_WALKING,
    E_ATTACKING,
};

class BigDemon : public Enemy, public Animated<EnemyAnimationState> {
    private:
        // Variables
        sf::CircleShape _aggroRange;

        // Variables
        float _speed;

        // Private Functions
        void initVariables();
        void initTexture();
        void initSprite();
        void initAnimations();

    public:
        // Constructor and Destructor
        BigDemon();
        virtual ~BigDemon();

        // Functions

        int getDamage();
        void takeDamage(int damage);
        void takeDamage(int damage, Player* player);
        int getHp();

        void updateAnimations();
        void update();
        void render(sf::RenderTarget& target);

        void listFree();
};