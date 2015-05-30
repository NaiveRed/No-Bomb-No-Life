#include"AllItem.h"
#include"BombGame.h"
#include<iostream>
int main()
{
	
	BombGame game;
	std::unique_ptr<Menu> menu(new Menu);

	game.setMenu(menu);

	game.MenuProcess();

	//std::shared_ptr<Item> water(new Pin());
	//Ability ab{ 1, 5, 3, 4, 2,10 };
	//Character Man("@", "Man", ab), nn("@", "Man", ab);
	//Man.setItem(water);
	//nn.setItem(water);
	//nn.UseItem();
	//Man.UseItem();

	//Map *a = new Map("map1");
	//a->displayMap();
	//delete a;



	return 0;
}
