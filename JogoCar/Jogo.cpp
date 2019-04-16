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
	pos = 1;
	//sprselect = "";
	xMenu = 400;
	yMenu = 300;
	
	/*gRecursos.carregarSpriteSheet("selection_structure_obj", "assets/selection/selection_structure_object.png", 1, 1);
	gRecursos.carregarSpriteSheet("selection_structure_back", "assets/selection/selection_structure_back.png", 1, 1);
	gRecursos.carregarSpriteSheet("selection_down", "assets/selection/selection_down.png", 1, 1);
	gRecursos.carregarSpriteSheet("Car1", "assets/spritesheets/car_red.png", 4, 1);
	gRecursos.carregarSpriteSheet("Car2", "assets/spritesheets/car_blue.png", 4, 1);
	gRecursos.carregarSpriteSheet("Car3", "assets/spritesheets/car_yellow.png", 4, 1);*/

	
	
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
	
	//gMusica.tocar("Kings_Feast", true);
	
	sprMenuSelect.setSpriteSheet("selection_structure_back");
	//sprSelect.setSpriteSheet("selection_structure_obj");
	sprDownSelect.setSpriteSheet("selection_structure_obj");
	
		
	sprDownSelect.setX(xMenu);
	sprDownSelect.setY(yMenu);

	
	/*test.setFonte("MCraft");  	
	std::string texto_test = "Selecione o carro";
	test.setString(texto_test);
	test.setCor(0, 0, 0, true);
	test.setAlinhamento(TEXTO_CENTRALIZADO);
	test.setEspacamentoLinhas(1.5f);*/
		   	
	
	
			
	//	O resto da inicialização vem aqui!
	//	...
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	//	...

	uniFinalizar();
}

void Jogo::executar()
{	
	

	
	while (!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
		
		//test.desenhar(400, 100, 0);

		executeSelect(); 			
		updateM();
		
		if (gTeclado.soltou[TECLA_ENTER])
		{
			//lista.at(pos - 1);
			gAudios.tocar("SMCoin", 50);

			while (!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
				{
					uniIniciarFrame();


					carro->draw();
					carro->update();

					uniTerminarFrame();

				}
			

		}	

		uniTerminarFrame();
		//	Seu código vem aqui!
		//	...	
			
	}		
}


void Jogo::movLista()
{	
	Listar();

	if (gTeclado.soltou[TECLA_DIR] && pos >= 1 && pos < 3)
	{
		pos += 1;  		
			
	}
	if (gTeclado.soltou[TECLA_ESQ] && pos >= 2 && pos <= 3)
	{
		pos -= 1; 		
		
	}
	
	if (pos == 1)
	{
		xMenu = 269;
	}
	if (pos == 2)
	{
		xMenu = 399;
	}
	if (pos == 3)
	{
		xMenu = 530;
	}
	sprDownSelect.setX(xMenu);			

}

void Jogo::executeSelect()
{		
	sprMenuSelect.desenhar(400, 300);
		
	sprDownSelect.desenhar();
	
}

void Jogo::updateM()
{
	movLista();
		
}

void Jogo::Listar()
{
		
	carro->setSpriteSheet("Car" + std::to_string(pos)); //Seta sprite do carro selecionado.
	lista.push_back(carro->getSprite()); //Adiciona a sprite na última posição da lista.
	carro->desenhar(xMenu, 300);//Desenha na posição com a seleção.
	
	
		
}

int Jogo::getPos()
{
	return pos;
}

float Jogo::getXMenu()
{
	return xMenu;
}

float Jogo::getYMenu()
{
	return yMenu;
}