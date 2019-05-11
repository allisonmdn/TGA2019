#include "Lentos.h"



Lentos::Lentos()
{
	setSoundCar(s_car3);
}


Lentos::~Lentos()
{
}

void Lentos::especialAtk()
{
	if (gTeclado.segurando[TECLA_ESPACO])
	{
		gGraficos.desenharTexto("CARRO LENTO!", getX(), getY(), 255, 255, 255, 255);
	}
	
}

void Lentos::setSoundCar(std::string i)
{
	s_car3 = i;
   
	if (setIsMovendo(false))
	{	
		s_car3 = "lenParado"; 		
	}
	else
	{
		s_car3 = "lenAndando";
	}
	
		
}

std::string Lentos::getSoundCar()
{
	return s_car3;
}
