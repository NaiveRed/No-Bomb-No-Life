#pragma once
#include<windows.h>
#include<string>
#define MAP_WIDTH 20
#define MAP_HEIGHT 18

enum ELE_STATUS{
	NORMAL,NON_ELIMINATION, ELIMINATION//normal���i�樫����
};
struct MapElement
{
	int id;//�s��0���i�樫���� 1�������i��������ê�� ��l�����i��������ê��
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

