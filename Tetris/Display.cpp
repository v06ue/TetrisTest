#include "Display.h";

using namespace sf;

void Display::initialization()
{
	textDisplay.loadFromFile("images/tiles.png");
	spriteDisplay.setTexture(textDisplay); 
}
void Display::draw(RenderWindow& window)
{
	for (int i = 0; i < HEIGHT_DISPLAY; i++) 
		for (int j = 0; j < WIGTH_DISPLAY; j++)  
		{
			if (tileDisplay[i][j] == '0')
			{
				spriteDisplay.setTextureRect(IntRect(0, 0, LENGTH_TILE, LENGTH_TILE));
				spriteDisplay.setPosition(LENGTH_TILE * j, LENGTH_TILE * i);
			}
			if (tileDisplay[i][j] == '1')
			{
				spriteDisplay.setTextureRect(IntRect(LENGTH_TILE, 0, LENGTH_TILE, LENGTH_TILE));
				spriteDisplay.setPosition(LENGTH_TILE * j, LENGTH_TILE * i);
			}
			if (tileDisplay[i][j] == '2')
			{
				spriteDisplay.setTextureRect(IntRect(LENGTH_TILE * 2, 0, LENGTH_TILE, LENGTH_TILE));
				spriteDisplay.setPosition(LENGTH_TILE * j, LENGTH_TILE * i);
			}
			window.draw(spriteDisplay);
		}
}