#include"AllItem.h"
#include"BombGame.h"
#include<iostream>
int main()
{
	
	BombGame game;
	std::unique_ptr<Menu> menu(new Menu);

	game.setMenu(menu);

	game.MenuProcess();


	return 0;
}
