#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
class TileMap : public sf::Drawable, public sf::Transformable
{
private:

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

	sf::VertexArray m_vertices;
	std::vector<std::vector<bool>> tileCollision;
	sf::Texture m_tileset;
public:

	bool loadTexture(const std::string& tileTextFile, sf::Vector2u tileSize, std::vector<std::vector<int>> &mapTiles, unsigned int width, unsigned int height);

};

