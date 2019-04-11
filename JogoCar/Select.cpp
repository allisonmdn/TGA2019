#include "Select.h"



Select::Select()
{		
	pos = 1; 	
	xMenu = 268;
	yMenu = 300;
	sprDownSelect.setX(xMenu);
	sprDownSelect.setY(yMenu);
	
}


Select::~Select()
{
}


void Select::movLista()
{		
	sprMenuSelect.setSpriteSheet("selection_structure_back");
	sprMenuSelectObj.setSpriteSheet("selection_structure_obj");
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
	FundoMenu();
	
	
		
}

void Select::updateM()
{
	movLista();				 
	sprMenuSelectObj.desenhar(xMenu, yMenu);
}

void Select::Listar()
{
	for (int i = 0; i < 3; i++)
	{
		sprselect = "Car" + std::to_string(i);

		lista.push_back(sprselect);
	}
	
		
}

void Select::FundoMenu()
{
	
	for (int i = 0; i < 3; i++)
	{
		xMenu += 130;
		if (i == 0)
		{
			menuS.setSpriteSheet("select_structure_obj");
			sprMenuSelectObj = menuS;
			menu.push_back(menuS);
			sprMenuSelectObj.setAncora(xMenu, 300);
			
			
		}
		else
		{
			menuS.setSpriteSheet("select_structure_obj");
			sprMenuSelectObj = menuS;
			menu.push_back(menuS);
			
		}
				
		
	}
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


