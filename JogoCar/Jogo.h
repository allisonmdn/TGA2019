#pragma once
#include "libUnicornio.h"
#include "Carro.h"
class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();

	void executar();
private:
	Carro * p1 = new Carro();

};

