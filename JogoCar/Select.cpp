#include "Select.h"



Select::Select()
{		
	pos = 1;

	xMenu = 400;
	yMenu = 300;
			
}


Select::~Select()
{
}

void Select::movLista()
{
	
	Listar();
		
	if (gTeclado.soltou[TECLA_DIR] && pos >= 1 && pos < 3)
	{
		pos += 1;

	}
	if (gTeclado.soltou[TECLA_ESQ] && pos >= 2 && pos <= 3)
	{
		pos -= 1;

	}

	if (pos == 1)
	{	 
		xMenu = 269;
		
		
	}
	if (pos == 2)
	{  
		xMenu = 399;
				
	}
	if (pos == 3)
	{			
		xMenu = 530;
				
	}
	

}

void Select::executeSelect()
{	
	//Buscar os metódos de execução da seleção.	
	
	carro[pos - 1]->draw();
	carro[pos - 1]->update();   	

}

void Select::updateM()
{
	movLista();

}

void Select::Listar()
{

	//Aloc. din.
	carro[0] = new Equilibrados();

	carro[1] = new Rapidos();

	carro[2] = new Lentos();

	carro[pos - 1]->setSpriteSheet("Car" + std::to_string(pos)); //Seta sprite do carro selecionado.

	//lista.push_back(carro[pos]->getSprite()); //Adiciona a sprite na última posição da lista.
	carro[pos - 1]->desenhar(getXMenu(), 300);//Desenha na posição com a seleção.  
}

int Select::getPos()
{
	return pos;
}

float Select::getXMenu()
{
	return xMenu;
}

float Select::getYMenu()
{
	return yMenu;
}

