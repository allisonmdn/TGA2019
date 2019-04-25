#include "Rapidos.h"



Rapidos::Rapidos()
{
	
}


Rapidos::~Rapidos()
{
}

void Rapidos::especialAtk()
{
	if (gTeclado.soltou[TECLA_ESPACO])
	{
		gGraficos.desenharTexto("ATAQUE RÁPIDO!", getX(), getY() - 5, 255, 255, 255, 255);
	}
}

void Rapidos::setSoundCar(std::string i)
{
	s_car2 = i;

	s_car2 = "rapido_engine_1";
	
}
