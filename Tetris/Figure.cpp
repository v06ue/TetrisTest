#include "Figure.h"
#include "Parameters.h"

void Figure::initialization()
{
	Color colorArray[5] = { Color::Red, Color::Green, Color::Yellow, Color::Blue, Color::Magenta };
	textTile.loadFromFile("images/tiles.png");
	spriteTile.setTexture(textTile);
	spriteTile.setColor(colorArray[rand()%5]);
	spriteTile.setTextureRect(IntRect(100, 0, 50, 50));
}
void Figure::draw(RenderWindow& window)
{
	for (auto iter = tiles.begin(); iter != tiles.end(); iter++)
	{
		spriteTile.setPosition(iter->x * LENGTH_TILE, iter->y * LENGTH_TILE);
		window.draw(spriteTile);
	}
}
void Figure::down()
{
	for (auto iter = tiles.begin(); iter != tiles.end(); iter++)
	{
		iter->y++;
	}
}
void Figure::left()
{
	for (auto iter = tiles.begin(); iter != tiles.end(); iter++)
	{
		iter->x--;
	}
}
void Figure::right()
{
	for (auto iter = tiles.begin(); iter != tiles.end(); iter++)
	{
		iter->x++;
	}
}