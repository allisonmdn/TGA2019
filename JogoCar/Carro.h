#include <iostream>
#include "libUnicornio.h"

class Carro: public ObjetoTileMap
{
public:
	Carro();
	~Carro();

	//Methods
	void move(int dx, int dy, float dir2);
	bool setIsMovendo(bool m); 	
	void draw();
	void update();
	virtual void especialAtk();	

	//Sets
	void setSpriteSheet(std::string Sprite);
	virtual void setSpeed(float speed2);
	virtual void setSoundCar(std::string i);

	//Returns
	int getX();//x
	int getY();//y	
	Sprite getSprite();//Recebe sprite.
	float getDir();//Recebe a direção.
	float getSpeed();//Recebe a Velocidade do carro.
	virtual std::string getSoundCar(); //Recebe o som do respectivo carro.
	void playSoundCar();

private:
	//Var
	int x, y;//Eixos.
	int dir; //Direção.		 
	Sprite car;
	float speed;
	float rot = 0;//Rotação, cause necessite mudança contínua.
	std::string somCarro;
	bool mov;//Em caso que estiver movendo o carro.
	Som tocar;
	
};