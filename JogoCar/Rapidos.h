#include "Carro.h"
#pragma once
class Rapidos:virtual public Carro
{
public:
	Rapidos();
	~Rapidos();

	//Overrides
	void especialAtk() override;
};

