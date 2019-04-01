#include "Carro.h"

Carro::Carro()
{
	this->x = 400;
	this->y = 300;
}
Carro::~Carro()
{
}

void Carro::move(float dx, float dy, float pos2)
{
	this->x = dx;
	this->y = dy;
	this->pos = pos2;

	if (gTeclado.segurando[TECLA_W])
	{
		y -= 1;
		pos = 3;
		car.setAnimacao(0, false);		
	}
	if (gTeclado.segurando[TECLA_D])
	{
		x += 1;
		pos = 1;
		car.setAnimacao(3, false);		
	}
	if (gTeclado.segurando[TECLA_A])
	{
		x -= 1;
		pos = 2;
		car.setAnimacao(1, false);		  
	}
	if (gTeclado.segurando[TECLA_S])
	{
		y += 1;
		pos = 0;
		car.setAnimacao(2, false);
		if (gTeclado.segurando[TECLA_A] && gTeclado.segurando[TECLA_S])
		{
			setRot(5);
			getRot();
		}
	}
	
	if (!gTeclado.segurando[TECLA_S] && !gTeclado.segurando[TECLA_D] && !gTeclado.segurando[TECLA_W] && !gTeclado.segurando[TECLA_A] && getSpeed() == 0)
	{
		//setar animação para carro parado.
	}


	car.avancarAnimacao();

}

float Carro::getX()
{
	return x;
}

float Carro::getY()
{
	return y;
}

void Carro::draw()
{
	car.desenhar(x, y);
}

void Carro::update()
{
	this->move(x, y, pos);
}


void Carro::setSpriteSheet(std::string Sprite)
{
	car.setSpriteSheet(Sprite);
    setSprite(&car); 	
	
}

void Carro::setSpeed(float speed2)
{
	speed = speed2;
	speed = 0.5;

}

Sprite Carro::getSprite()
{
	return car;
}

float Carro::getPos()
{
	return pos;
}

float Carro::getSpeed()
{
	return speed;
}
