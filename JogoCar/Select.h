#include "Carro.h"
#include <list>
#pragma once
class Select: public Carro
{
public:
	Select();
	~Select();

	//Methods
		
	void movLista(); //Movimenta seleção.
	void executeSelect();
	void updateM();
	void Listar();//Lista de carros.
	void FundoMenu();


	//Sets
	

	//Returns
	int getPos();
	float getXMenu();
	float getYMenu();



private:
	int pos;
	std::string sprselect;
	Sprite menuS;//Atribuindo o carro selecionado.
	Sprite sprMenuSelect, sprMenuSelectObj;
	BotaoSprite sprDownSelect;//Sprite manu seleção.
	float xMenu, yMenu;
	vector<std::string> lista;
	vector<Sprite> menu;
	Carro * spr = new Carro(); // Sprite carros.


};

