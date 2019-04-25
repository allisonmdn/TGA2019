//#include "Carro.h"
#include "Lentos.h"

//#include <list>

#pragma once

class Select: virtual public Carro	
{
public:
	Select();
	~Select();

	//Methods
		
	void movLista(); //Movimenta seleção.
	void executeSelect();//Executa a seleção.
	void updateM();//Atualiza.
	void Listar();//Lista de carros, alocação.  	
	
	//Sets
	

	//Returns
	int getPos();
	float getXMenu();
	float getYMenu();



private:
	int pos;//Posição da lista dos carros. 	
	float xMenu, yMenu; //Centro tela.
	//list<Sprite> lista;
	Carro * carro[3];// = new Carro();
		
};

