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
	

private:
	
	GerenciadorRecursos * g_recursos = new GerenciadorRecursos;
	Select * selecao = new Select;
	Sprite pista1;//Pista 1	   	
	Sprite sprMenuSelect;
	Sprite sprDownSelect;//Sprite menu seleção.
	Texto txt;
};

