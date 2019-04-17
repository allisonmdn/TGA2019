#pragma once
#include "libUnicornio.h"
#include "Carro.h"
#include "CarregadorAssets.h" 
class Jogo 
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();

	void executar();
		
	void movLista(); //Movimenta sele��o.
	void executeSelect();
	void updateM();
	void Listar();//Lista de carros.
		

	//Returns
	int getPos();
	float getXMenu();
	float getYMenu();

	//Text
	//Texto test;


private:
	int pos;//Posi��o da lista dos carros.   	
	//Sprite sprSelect;
	Sprite sprMenuSelect;
	BotaoSprite sprDownSelect;//Sprite menu sele��o.
	float xMenu, yMenu;
	vector<Sprite> lista;
	Carro * carro = new Carro();
	std::fstream f_stream;
	Sprite pista1;//Pista 1

	
	
};

