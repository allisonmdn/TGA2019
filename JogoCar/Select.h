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
		
	void movLista(); //Movimenta sele��o.
	void executeSelect();//Executa a sele��o.
	void updateM();//Atualiza.
	void Listar();//Lista de carros, aloca��o.  	
	
	//Sets
	

	//Returns
	int getPos();
	float getXMenu();
	float getYMenu();



private:
	int pos;//Posi��o da lista dos carros. 	
	float xMenu, yMenu; //Centro tela.
	//list<Sprite> lista;
	Carro * carro[3];// = new Carro();
		
};

