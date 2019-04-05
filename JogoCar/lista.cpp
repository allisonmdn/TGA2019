#include "lista.h"



lista::lista()
{
}


lista::~lista()
{
}

bool lista::loadSpriteSheet()
{
	gRecursos.carregarSpriteSheet("Car1", "assets/spritesheets/car_red.png", 4, 1);
	gRecursos.carregarSpriteSheet("Car2", "assets/spritesheets/car_blue.png", 4, 1);
	gRecursos.carregarSpriteSheet("Car3", "assets/spritesheets/car_yellow.png", 4, 1);
	gRecursos.carregarSpriteSheet("selection_structure", "assets/selection/selection_structure.png", 1, 1);
	gRecursos.carregarSpriteSheet("selection_down", "assets/selection/selection_down.png", 1, 3);


	return true;
}

void lista::select(int i)
{
	pos = i;
	

	if (pos == 1)
	{

		sprselect = "Car1";
	}
	if (pos == 2)
	{
		sprselect = "Car2";
	}
	if (pos == 3)
	{
		sprselect = "Car3";
	}

	spr->setSpriteSheet(sprselect);

	if (gTeclado.pressionou[TECLA_ENTER])
	{
		if (gTeclado.pressionou[pos])
		{
			select(pos);
		}
	}

}
