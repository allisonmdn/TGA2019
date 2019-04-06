#include "Select.h"



Select::Select()
{
	
	pos = 1;
	sprselect = "";
	xMenu = 400;
	yMenu = 300;  	
	sprMenuSelect.setSpriteSheet("selection_structure"); 	
	sprDownSelect.setSpriteSheet("selection_down");	
	spr->setSpriteSheet(sprselect);
}


Select::~Select()
{
}

bool Select::selectOp(int i)
{
	pos = i;
		
	if (gTeclado.pressionou[TECLA_ENTER])
	{
		selectOp(pos);		
	
		return true;
	}

}

void Select::movLista(float xM)
{		
	xMenu = xM;

	if (gTeclado.soltou[TECLA_DIR] && pos >= 1 && pos < 3 )
	{
		pos += 1;
		this->sprDownSelect.setFrame(pos); //Seta frame/seleção através da posição da lista.
		this->sprDownSelect.getFrame();	  //Recebe   		
	}
	if (gTeclado.soltou[TECLA_ESQ] && pos >= 2 && pos <= 3)
	{
		pos -= 1;
		this->sprDownSelect.setFrame(pos);
		this->sprDownSelect.getFrame();
		
	}
	//xMenu = sprDownSelect.getX();	//Atribuir na variável do eixo x à posição da sprite.
	this->selectOp(pos);
		
}

void Select::executeSelect()
{
		
	sprMenuSelect.desenhar(400, 300);	   	
	sprDownSelect.desenhar(this->getXMenu(), this->getYMenu());
	if (selectOp(pos) == true)
	{
		spr->draw();
	}
	
}

void Select::updateM()
{
	movLista(xMenu);
	spr->update();
}

bool Select::Listar()
{
	
	if (lista.empty())
	{
		sprselect = "Car1";
		lista.front() = sprselect;
	}
	else
	{
		sprselect = "Car2";
		lista.push_back(sprselect);
		sprselect = "Car3";
		lista.push_back(sprselect);	   		
	}
	lista.at(pos - 1); //Encontrar a posição de 0 a 2, var. "pos" inicializada em 1.

	return true;
}

void Select::setXMenu()
{
	//Receber mudança de coordenadas do eixo x.
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


