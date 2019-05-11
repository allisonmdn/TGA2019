#include "Equilibrados.h"



Equilibrados::Equilibrados()
{
	setSoundCar(s_car1);
}


Equilibrados::~Equilibrados()
{
}

void Equilibrados::especialAtk()
{
	if (gTeclado.segurando[TECLA_ESPACO])
	{		
		gGraficos.desenharTexto("CARRO MÉDIO!", getX(), getY(), 255, 255, 255, 255);
	}
}

void Equilibrados::setSoundCar(std::string i)
{
	s_car1 = i;	  	
	
	if (setIsMovendo(false))
	{			
		s_car1 = "eqParado";
	}
	else
	{
		s_car1 = "eqAndando";
	}
	
}

std::string Equilibrados::getSoundCar()
{
	return s_car1;
}
