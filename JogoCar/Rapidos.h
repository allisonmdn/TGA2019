#include "Carro.h"
#pragma once
class Rapidos:virtual public Carro
{
public:
	Rapidos();
	~Rapidos();

	//Overrides
	void especialAtk() override;
	void setSoundCar(std::string i) override;

private:
	std::string s_car2;

};

