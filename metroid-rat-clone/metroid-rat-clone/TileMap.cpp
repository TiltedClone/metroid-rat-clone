#include "TileMap.h"

void TileMap::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	states.texture = &m_tileset;
	target.draw(m_vertices, states);
}

bool TileMap::loadTexture(const std::string & tileTextFile, sf::Vector2u tileSize, std::vector<std::vector<Tile>> &mapTiles, unsigned int width, unsigned int height)
{

	if (!m_tileset.loadFromFile(tileTextFile))
		return false;

	m_vertices.setPrimitiveType(sf::Quads);
	m_vertices.resize(width * height * 4);

	for (int mapY = 0; mapY < mapTiles.size(); mapY++)
		for (int mapX = 0; mapX < mapTiles[mapY].size(); mapX++)
		{
			int tileType = mapTiles[mapY][mapX].tileNumber;


			int textX = tileType % (m_tileset.getSize().x / tileSize.x);
			int textY = tileType / (m_tileset.getSize().x / tileSize.x);


			sf::Vertex* quad = &m_vertices[(mapX + mapY * height) * 4];


			quad[0].position = sf::Vector2f(mapX * tileSize.x, mapY * tileSize.y);
			quad[1].position = sf::Vector2f((mapX + 1) * tileSize.x, mapY * tileSize.y);
			quad[2].position = sf::Vector2f((mapX + 1) * tileSize.x, (mapY + 1) * tileSize.y);
			quad[3].position = sf::Vector2f(mapX * tileSize.x, (mapY + 1) * tileSize.y);


			quad[0].texCoords = sf::Vector2f(textX * tileSize.x, textY * tileSize.y);
			quad[1].texCoords = sf::Vector2f((textX + 1) * tileSize.x, textY * tileSize.y);
			quad[2].texCoords = sf::Vector2f((textX + 1) * tileSize.x, (textY + 1) * tileSize.y);
			quad[3].texCoords = sf::Vector2f(textX * tileSize.x, (textY + 1) * tileSize.y);
		}

}
