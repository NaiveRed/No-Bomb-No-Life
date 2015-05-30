#pragma once
#include<windows.h>
#include<string>
#define MAP_WIDTH 20
#define MAP_HEIGHT 18

enum ELE_STATUS{
	NORMAL,NON_ELIMINATION, ELIMINATION//normal為可行走的路
};
struct MapElement
{
	int id;//編號0為可行走的路 1的為不可消除之障礙物 其餘都為可消除之障礙物
	COORD pos;
	ELE_STATUS elimination;
	unsigned short colorIndex;

};
class Map

{
public:
	Map();
	Map(Map &map);
	Map(std::string FileName);
	~Map();
	std::string getName(){ return name; }
	void displayMap();

	Map& operator =(Map& rside);

private:
	HANDLE hConsole;
	std::string name;
	MapElement **element;
	void displayElement(MapElement);
};

