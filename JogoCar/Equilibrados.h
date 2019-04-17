#include "Carro.h"
#pragma once
class Equilibrados:virtual public Carro
{
public:
	Equilibrados();
	~Equilibrados();

	//Overrides.

	void especialAtk() override;
};

