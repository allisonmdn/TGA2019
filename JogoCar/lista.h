#include "Carro.h"
#pragma once
class lista: public Carro
{
public:
	lista();
	~lista();
	bool loadSpriteSheet();	
	void select(int i);
	void movLista();

private:
	int pos;
	std::string sprselect = "";
	Carro * spr;

};

