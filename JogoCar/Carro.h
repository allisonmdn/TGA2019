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
	virtual void setSpeed(float speed2);
	virtual void setSoundCar(std::string i);

	//Returns
	float getX();
	float getY();	
	Sprite getSprite();
	float getDir();
	float getSpeed();
	std::string getSomCarro();

private:
	//Var
	float x, y;
	float dir; //Direção		 
	Sprite car;
	float speed;
	float rot = 0;
	std::string somCarro;
	
};