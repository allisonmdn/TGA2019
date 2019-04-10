#include "Select.h"



Select::Select()
{		
	pos = 1; 	
	xMenu = 400;
	yMenu = 300;
	sprDownSelect.setX(xMenu);
	sprDownSelect.setY(yMenu);
	
}


Select::~Select()
{
}


void Select::movLista()
{		
	sprMenuSelect.setSpriteSheet("selection_structure");
	sprDownSelect.setSpriteSheet("selection_down");
	spr->setSpriteSheet(sprselect);

	if (gTeclado.soltou[TECLA_DIR] && pos >= 1 && pos < 3 )
	{
		pos += 1;
			
	}
	if (gTeclado.soltou[TECLA_ESQ] && pos >= 2 && pos <= 3)
	{
		pos -= 1;
				
	}
	if (pos == 1)
	{
		sprDownSelect.setX(267);
	}
	if (pos == 2)
	{
		sprDownSelect.setX(398);
	}
	if (pos == 3)
	{
		sprDownSelect.setX(528);
	}
	xMenu = sprDownSelect.getX();	//Atribuir na variável do eixo x à posição da sprite.
	if (gTeclado.pressionou[TECLA_ENTER])
	{
		
		lista.at(pos - 1); //Encontrar a posição de 0 a 2, var. "pos" inicializada em 1.
		
	}
		
}

void Select::executeSelect()
{
		
	sprMenuSelect.desenhar(400, 300);	   	
	sprDownSelect.desenhar();
		
}

void Select::updateM()
{
	movLista();				 
	
}

void Select::Listar()
{
	
	
	sprselect = "Car1";
	lista.front() = sprselect;
	sprselect = "Car2";
	lista.push_back(sprselect);
	sprselect = "Car3";
	lista.push_back(sprselect);	   		
		
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


