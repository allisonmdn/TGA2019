
#include "Rapidos.h"
#include <iostream>
#pragma once
class Equilibrados: virtual public Carro
{
public:
	Equilibrados();
	~Equilibrados();

	//Overrides.

	void especialAtk() override;
	void setSoundCar(std::string i) override;

private:
	std::string s_car1;

};

