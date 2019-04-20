#include "libUnicornio.h"
#include <iostream>
#include <fstream>	
#include "CarregadorAssets.h"
#include "Select.h"	
#pragma once
class GerenciadorRecursos
{
public:
	GerenciadorRecursos();
	~GerenciadorRecursos();

	void inicializarRecursos();
	void executarRecursos();

private:  

	std::fstream f_stream;
	Sprite pista1;//Pista 1
	Select * selecao = new Select();
	Sprite sprMenuSelect;
	Sprite sprDownSelect;//Sprite menu seleção.
	
};

