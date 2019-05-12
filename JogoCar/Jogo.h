#pragma once
#include "libUnicornio.h"
//#include "Carro.h"
//#include "CarregadorAssets.h"
#include "GerenciadorRecursos.h"


class Jogo 
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();

	void executar();
	
	//Text
	Texto test;


private:
	
	GerenciadorRecursos * g_recursos = new GerenciadorRecursos();  
	
};

