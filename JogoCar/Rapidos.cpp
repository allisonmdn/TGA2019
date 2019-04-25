#include "Rapidos.h"



Rapidos::Rapidos()
{
	setSoundCar(s_car2);
}


Rapidos::~Rapidos()
{
}

void Rapidos::especialAtk()
{
	if (gTeclado.soltou[TECLA_ESPACO])
	{
		gGraficos.desenharTexto("CARRO RÁPIDO!", getX(), getY(), 255, 255, 255, 255);
	}
}

void Rapidos::setSoundCar(std::string i)
{
	s_car2 = i;

	s_car2 = "rapParado";
	
}
