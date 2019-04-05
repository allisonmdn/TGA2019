#include "Carro.h"
#pragma once
class Select: public Carro
{
public:
	Select();
	~Select();
	bool loadSpriteSheet();	
	void select(int i);
	void movLista();

private:
	int pos;
	std::string sprselect = "";
	Carro * spr;

};

