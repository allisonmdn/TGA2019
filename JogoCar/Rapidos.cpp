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
	if (gTeclado.segurando[TECLA_ESPACO])
	{
		gGraficos.desenharTexto("CARRO RÁPIDO!", getX(), getY(), 255, 255, 255, 255);
	}
}

void Rapidos::setSoundCar(std::string i)
{
	s_car2 = i;
		
	if (getIsMovendo() == false)
	{											
		s_car2 = "rapParado";					
	}
	else
	{
		s_car2 = "rapAndando";	
	}  	
	
}

std::string Rapidos::getSoundCar()
{
	return s_car2;
}
