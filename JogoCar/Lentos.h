
#include "Equilibrados.h"
#pragma once
class Lentos: virtual public Carro
{
public:
	Lentos();
	~Lentos();

	//Overrides.

	virtual void especialAtk() override;
	void setSoundCar(std::string i) override;

private:
	std::string s_car3;

};

