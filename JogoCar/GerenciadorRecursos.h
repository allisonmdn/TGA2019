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
	
private:  

	std::fstream f_stream;
   	
};

