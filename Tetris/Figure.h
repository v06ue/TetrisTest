#include <iostream>
#include <vector>
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

class Figure
{
protected:
	struct Point
	{
		int x;
		int y;
	};
	vector<Point> tiles;
	Texture textTile;
	Sprite spriteTile; 
public:
    void initialization();
	void draw(RenderWindow& window);
	void left();
	void right();
	void down();
};

class FirstFigure : public Figure // I
{
public:
	FirstFigure() { tiles = { {0,0}, {1,0}, {2,0}, {3,0} }; }
};

class SecondFigure : public Figure // T
{
public:
	SecondFigure() { tiles = { {0,0}, {1,0}, {2,0}, {1,1} }; }
};

class ThirdFigure : public Figure // O
{
public:
	ThirdFigure() { tiles = { {0,0}, {1,0}, {0,1}, {1,1} }; }
};

class FourthFigure : public Figure // L
{
public:
	FourthFigure() { tiles = { {0,0}, {0,1}, {0,2}, {1,2} }; }
};

class FifthFigure : public Figure // Z
{
public:
	FifthFigure() { tiles = { {0,0}, {1,0}, {1,1}, {2,1} }; }
};
