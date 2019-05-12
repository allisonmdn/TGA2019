#include <iostream>
#include "libUnicornio.h"

class Carro: public ObjetoTileMap
{
public:
	Carro();
	~Carro();

	//Methods
	void move(float dx, float dy, float dir2);
	void setIsMovendo(bool i);
	
	void draw();
	void update();

	//Especial.

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
	bool getIsMovendo();//Recebe 0 ou 1, se movendo.

	//Sound
	virtual std::string getSoundCar(); //Recebe o som do respectivo carro.
	void playSoundCar();

private:
	//Var
	float x, y;//Eixos.
	float dir; //Direção.		 
	Sprite car;
	float speed;
	float rot = 0;//Rotação, cause necessite mudança contínua.
	std::string somCarro;
	bool mov;//Em caso que estiver movendo o carro.
	Som tocar;
	
};