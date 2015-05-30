/*
File: BombGame.h BombGame.cpp
IDE: Visual Studio 2013
Authors: Hung, Chung Chun(NaiveRed)
Email: jason841201@gmail.com
*/
#pragma once
#include<memory>
#include"Menu.h"
#include"Character.h"
#include"Map.h"

class BombGame
{
public:
	BombGame();
	~BombGame();

	void setMenu(std::unique_ptr<Menu>&);
	void MenuProcess();//���y�{�A�������B�a��

private:
	std::unique_ptr<Menu> menu;
	std::shared_ptr<Character> player1;
	std::shared_ptr<Character> player2;
	std::shared_ptr<Map> map;
};

