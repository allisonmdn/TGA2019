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
	std::string getSoundCar() override;

private:
	std::string s_car2;

};

