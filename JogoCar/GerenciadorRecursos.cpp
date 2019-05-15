#include "GerenciadorRecursos.h"



GerenciadorRecursos::GerenciadorRecursos()
{
}


GerenciadorRecursos::~GerenciadorRecursos()
{
}

void GerenciadorRecursos::inicializarRecursos()
{		
	//Arquivos assets

	this->f_stream.open("../mapa_assets.txt", std::ios::in);

	if (!f_stream.is_open())
	{
		gDebug.erro("erro ao abrir .txt", this);
	}
	else
	{
		//Cria alocação dinamicamente.

		CarregadorAssets * c_assets = new CarregadorAssets();

		if (!c_assets->Carregador(f_stream))
		{
			gDebug.erro("erro ao carregar recursos!");
		}
		f_stream.close();

	}

		
	gMusica.tocar("TitleTop",true,0,0);
		
}



