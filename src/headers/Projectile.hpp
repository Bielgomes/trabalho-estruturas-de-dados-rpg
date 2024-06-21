#include "Entity.hpp"

class Projectile : public Entity {
    protected:
        // Variables
        sf::Vector2f _direction;
        float _maxDistance;
        float _distanceTravelled;
        float _speed;

        int _dmg;

        // Private Functions
        void initVariables();
        void initTexture();
        void initSprite();

    public:
        // Constructor and Destructor
        Projectile(sf::Vector2f direction, sf::Vector2f position, float rotation);
        virtual ~Projectile();

        // Accessors
        int getDamage() const;

        // Functions
        void update();
        
        void listFree();
};