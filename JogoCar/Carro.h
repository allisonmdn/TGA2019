#include <iostream>
#include "libUnicornio.h"

class Carro: public ObjetoTileMap
{
public:
	Carro();
	~Carro();

	//Methods
	void move(int dx, int dy, float dir2);
	bool isMovendo();
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
	float getDir();//Recebe a dire��o.
	float getSpeed();//Recebe a Velocidade do carro.
	std::string getSomCarro(); //Recebe o som do respectivo carro.

private:
	//Var
	int x, y;//Eixos.
	int dir; //Dire��o.		 
	Sprite car;
	float speed;
	float rot = 0;//Rota��o, cause necessite mudan�a cont�nua.
	std::string somCarro = "";
	bool mov = false;//Em caso que estiver movendo o carro.
	
};