#include "Carro.h"
#pragma once
class Lentos: virtual public Carro
{
public:
	Lentos();
	~Lentos();

	//Overrides.

	void especialAtk() override;
};

