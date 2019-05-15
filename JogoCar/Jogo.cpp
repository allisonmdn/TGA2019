#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);
	
	g_recursos->inicializarRecursos();	//Carrega e inicializa os recursos base.
	
										//Mapa

	pista1.setSpriteSheet("Pista");

										//Sele��o

	sprMenuSelect.setSpriteSheet("selection_structure_back");
	sprDownSelect.setSpriteSheet("selection_structure_obj");

									    //Texto
	
	txt.setFonte("minecraft");
	std::string texto = "Selecione o carro, e pressione [ENTER]";
	txt.setString(texto);

	txt.setCor(255, 255, 255, true);
	txt.setAlinhamento(TEXTO_CENTRALIZADO);
	txt.setEspacamentoLinhas(1.5f);

				
	//	O resto da inicializa��o vem aqui!
	//	...
}

void Jogo::finalizar()
{
	//	O resto da finaliza��o vem aqui (provavelmente, em ordem inversa a inicializa��o)!
	//	...

	gRecursos.descarregarTudo();

	uniFinalizar();
}

void Jogo::executar()
{		   

	
	while (!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
								 //CARRO

		sprMenuSelect.desenhar(400, 300);  //Menu fundo branco, sele��o carro.
		sprDownSelect.desenhar(selecao->getXMenu(), selecao->getYMenu()); //Menu bloco azul, sele��o objeto carro.
		
		selecao->updateM();	//Atualizar sele��o menu.

		txt.desenhar(400, 200);  //Texto da sele��o.


		if (gTeclado.soltou[TECLA_ENTER])
		{
			//lista.at(pos - 1);

			gAudios.tocar("SMCoin", 50);


			while (!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
			{
				uniIniciarFrame();

				pista1.desenhar(400, 300);
				selecao->executeSelect(); //Execu��o da sele��o.

				uniTerminarFrame();

			}

		}
		


		uniTerminarFrame();
		//	Seu c�digo vem aqui!
		//	...	
			
	}		
}


