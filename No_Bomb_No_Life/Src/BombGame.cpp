#include"BombGame.h"
#include"controlCon.h"
#include<iostream>
#include<string>
#include<vector>
#include<conio.h>

BombGame::BombGame() :player1(new Character), player2(new Character), map(new Map)
{

}

BombGame::~BombGame()
{
}
void BombGame::setMenu(std::unique_ptr<Menu>& _menu)
{
	menu = std::move(_menu);
}

void BombGame::MenuProcess()
{
	int opt(0);
	bool back(false);

	while (!opt)//0就繼續顯示主選單
	{
		if (!back)
			if (menu)
				opt = menu->DisplayList();
			else
			{
				std::cout << "Loading Menu failed!" << std::endl;
				break;
			}
		label:
		switch (opt)
		{
		case 1:opt = menu->DisplayPvPMenu(player1, player2); break;//return 1
		case 2:opt = menu->DisplayPvCMenu(); break;//return 2
		case 3:opt = menu->DisplayHelp(); break;//return 0
		case 4:opt = menu->DisplayStaff(); break;//return 0
		}
		Sleep(100);

		if (opt == PVP_OPTION)
		{
			if (back = !menu->selectMap(map))
			{
				opt = 1;
				goto label;
			}
		}
		else if (opt == PVC_OPTION)
		{
			//not finish
		}
	}



}
