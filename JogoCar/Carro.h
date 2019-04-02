#include <iostream>
#include "libUnicornio.h"

class Carro: public ObjetoTileMap
{
public:
	Carro();
	~Carro();

	//Methods
	void move(float dx, float dy, float pos2);
	void draw();
	void update();

	//Sets
	void setSpriteSheet(std::string Sprite);
	void setSpeed(float speed2);

	//Returns
	float getX();
	float getY();	
	Sprite getSprite();
	float getPos();
	float getSpeed();

private:
	//Var
	float x, y;
	float pos; //Direção		 
	Sprite car;
	float speed;
		
};