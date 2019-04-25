#include "Equilibrados.h"



Equilibrados::Equilibrados()
{
	
}


Equilibrados::~Equilibrados()
{
}

void Equilibrados::especialAtk()
{
	if (gTeclado.soltou[TECLA_ESPACO])
	{
		gGraficos.desenharTexto("ATAQUE MÉDIO!", getX(), getY(), 255, 255, 255, 255);
	}
}

void Equilibrados::setSoundCar(std::string i)
{
	s_car1 = i;

	s_car1 = "equilibrado_engine_2";
}
