#include "tree.hpp"

std::vector<sf::Texture> Tree::textures;
const int Tree::NTEXTURES = 6;


void Tree::loadTextures()
{
    for (int i = 1; i <= NTEXTURES; i++)
    {
        sf::Texture tTexture;
        tTexture.loadFromFile("media/t" + std::to_string(i) + ".png");
        tTexture.setSmooth(true);
        textures.push_back(tTexture);
    }
}

void Tree::setTexture(int id)
{
    mSprite.setTexture(textures.at(id));
    int y = mSprite.getTexture()->getSize().y;
    mSprite.setOrigin(0, y);
}

sf::Texture *Tree::getTexture(int id)
{
    return &textures.at(id);
}
