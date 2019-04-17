#include <iostream>
#include "libUnicornio.h"


class Carro: public ObjetoTileMap
{
public:
	Carro();
	~Carro();

	//Methods
	void move(float dx, float dy, float dir2);
	void draw();
	void update();
	virtual void especialAtk();	

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
	float dir; //Direção		 
	Sprite car;
	float speed;
	
};