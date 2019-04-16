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
		
	void movLista(); //Movimenta seleção.
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
	int pos;   	
	Sprite sprSelect;
	Sprite sprMenuSelect;
	BotaoSprite sprDownSelect;//Sprite manu seleção.
	float xMenu, yMenu;
	vector<Sprite> lista;
	Carro * carro = new Carro();
	std::fstream f_stream;
	Sprite pista1;

	
	
};

