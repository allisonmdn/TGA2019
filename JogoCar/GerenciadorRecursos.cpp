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
		//cria alocação dinamicamente.

		CarregadorAssets * c_assets = new CarregadorAssets();

		if (!c_assets->Carregador(f_stream))
		{
			gDebug.erro("erro ao carregar recursos!");
		}
		f_stream.close();

	}
     //Mapa
	pista1.setSpriteSheet("Pista");

	sprMenuSelect.setSpriteSheet("selection_structure_back");
	sprDownSelect.setSpriteSheet("selection_structure_obj");

	carro_som.setAudio(selecao->getSomCarro()); // Seta som do carro selecionado.
	
	

}

void GerenciadorRecursos::executarRecursos()
{		
	sprMenuSelect.desenhar(400,300);
	sprDownSelect.desenhar(selecao->getXMenu(), selecao->getYMenu()); //Recebe valor das variáveis do eixo x e y.
	
	selecao->updateM();

	

	if (gTeclado.soltou[TECLA_ENTER])
	{
		//lista.at(pos - 1);
		
		gAudios.tocar("SMCoin", 50);
		
		carro_som.tocar(true);
		//test.setAudio("TopGear2");
		//test.tocar(true);
		
		while (!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
		{
			uniIniciarFrame();
			 				   
			pista1.desenhar(400, 300);
			selecao->executeSelect(); //Execução da seleção.

			uniTerminarFrame();

		}

	}
}
