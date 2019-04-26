#include "Equilibrados.h"



Equilibrados::Equilibrados()
{
	
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

	s_car1 = "eqParado";

}
