#include "Carro.h"
#include <list>
#pragma once
class Select: public Carro
{
public:
	Select();
	~Select();

	//Methods
		
	bool selectOp(int i);//Se pressionado, retorna verdadeiro.	
	void movLista(float xM); //Movimenta seleção.
	void executeSelect();
	void updateM();
	bool Listar();//Lista de carros.


	//Sets
	
	void setXMenu();

	//Returns
	int getPos();
	float getXMenu();
	float getYMenu();



private:
	int pos;
	std::string sprselect;//Atribuindo o carro selecionado.
	Carro * spr; // Sprite carros.
	Sprite sprMenuSelect, sprDownSelect;//Sprite manu seleção.
	float xMenu, yMenu;
	vector<std::string> lista;


};

