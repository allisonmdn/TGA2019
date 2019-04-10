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


	//Sets
	

	//Returns
	int getPos();
	float getXMenu();
	float getYMenu();



private:
	int pos;
	std::string sprselect;//Atribuindo o carro selecionado.
	Sprite sprMenuSelect;
	BotaoSprite sprDownSelect;//Sprite manu seleção.
	float xMenu, yMenu;
	vector<std::string> lista;
	Carro * spr = new Carro(); // Sprite carros.


};

