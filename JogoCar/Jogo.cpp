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
	
	g_recursos->inicializarRecursos();
	
	/*test.setFonte("MCraft");  	
	std::string texto_test = "Selecione o carro";
	test.setString(texto_test);
	test.setCor(0, 0, 0, true);
	test.setAlinhamento(TEXTO_CENTRALIZADO);
	test.setEspacamentoLinhas(1.5f);*/
		   	
	
	
			
	//	O resto da inicializa��o vem aqui!
	//	...
}

void Jogo::finalizar()
{
	//	O resto da finaliza��o vem aqui (provavelmente, em ordem inversa a inicializa��o)!
	//	...

	uniFinalizar();
}

void Jogo::executar()
{	
	

	
	while (!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
		//test.desenhar(400, 100);
		g_recursos->executarRecursos();
		

		uniTerminarFrame();
		//	Seu c�digo vem aqui!
		//	...	
			
	}		
}


