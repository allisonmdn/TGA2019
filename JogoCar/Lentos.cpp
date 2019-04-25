#include "Lentos.h"



Lentos::Lentos()
{
	
}


Lentos::~Lentos()
{
}

void Lentos::especialAtk()
{
	if (gTeclado.soltou[TECLA_ESPACO])
	{
		gGraficos.desenharTexto("ATAQUE LENTO!", getX(), getY(), 255, 255, 255, 255);
	}
}

void Lentos::setSoundCar(std::string i)
{
	s_car3 = i;

	s_car3 = "lento_engine_3";

}
