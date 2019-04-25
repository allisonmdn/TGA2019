#include <iostream>
#include "libUnicornio.h"

class Carro: public ObjetoTileMap
{
public:
	Carro();
	~Carro();

	//Methods
	void move(float dx, float dy, float dir2);
	bool isMovendo();
	void draw();
	void update();
	virtual void especialAtk();	

	//Sets
	void setSpriteSheet(std::string Sprite);
	virtual void setSpeed(float speed2);
	virtual void setSoundCar(std::string i);

	//Returns
	float getX();//x
	float getY();//y	
	Sprite getSprite();//Recebe sprite.
	float getDir();//Recebe a direção.
	float getSpeed();//Recebe a Velocidade do carro.
	std::string getSomCarro(); //Recebe o som do respectivo carro.

private:
	//Var
	float x, y;//Eixos.
	float dir; //Direção.		 
	Sprite car;
	float speed;
	//float rot = 0;//Rotação, cause necessite mudança contínua.
	std::string somCarro = "";
	bool mov = false;//Em caso que estiver movendo o carro.
	
};