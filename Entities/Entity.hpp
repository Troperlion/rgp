#ifndef __ENTITIES_ENTITY_HPP__
#define __ENTITIES_ENTITY_HPP__

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>
#include <stack>
#include <map>

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Entity {

    public:
        
        //-------------------------------| CONSTRUCTOR / DESTRUCTOR
        
        Entity();
        virtual ~Entity();

        //-------------------------------| FUNCTIONS

        virtual void update(const float &dt);
        virtual void render(sf::RenderTarget *target);

        virtual void move(const float &dt, const float x, const float y);

        virtual void setPosition(const float x, const float y);

        //-------------------------------| COMPONENT FUNCTIONS

        void createSprite(sf::Texture *texture);
    
    protected:

        sf::Texture *texture;
        sf::Sprite *sprite;
        float movementSpeed;

    private:

        void InitVariables();

        //-------------------------------| VARIABLES

};

#endif //! __ENTITIES_ENTITY_HPP__