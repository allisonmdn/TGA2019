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
	void up();

	//Sets
	

	//Returns
	int getPos();
	float getXMenu();
	float getYMenu();



private:
	int pos;//Posição da lista dos carros. 	
	float xMenu, yMenu; //Centro tela.
	vector<Sprite> lista;
	Carro * carro = new Carro();


};

