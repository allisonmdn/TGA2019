
#include "Rapidos.h"

#pragma once
class Equilibrados: virtual public Carro
{
public:
	Equilibrados();
	~Equilibrados();

	//Overrides.

	void especialAtk() override;
	void setSoundCar(std::string i) override;
	std::string getSoundCar() override;

private:
	std::string s_car1;

};

