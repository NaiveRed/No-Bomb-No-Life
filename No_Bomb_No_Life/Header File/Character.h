/*
File: Character.h Character.cpp
IDE: Visual Studio 2013
Authors: Hung, Chung Chun(NaiveRed)
Email: jason841201@gmail.com
*/
#pragma once
#include<string>
#include<memory>
#include"Item.h"
enum STATUS{ DEAD, ALIVE, NEAR_DEATH };

struct Ability
{
	unsigned int power;     //waterball power
	unsigned int powerLim;  //limit of power
	unsigned int amount;	//waterball amount
	unsigned int amountLim; //limit of amount
	unsigned int speed;     //character speed
	unsigned int speedLim;  //limit of speed
};

class Character
{
public:
	Character(){}
	Character(std::string _appearance, std::string _name,Ability _ability) :status(ALIVE), appearance(_appearance), name(_name),ability(_ability){}
	Character(Character &);
	~Character();

	void UseItem();

	//set/get function
	void setStatus(STATUS _status){ status = _status; }
	STATUS getStatus(){ return status; }

	std::string getAppearance(){ return appearance; }
	std::string getName(){ return name; }

	//change 為增加或減少的量，非直接指定能力直
	void setPower(int change);
	unsigned int getPower();

	void setAmount(int change);
	unsigned int getAmount();

	void setSpeed(int change);
	unsigned int getSpeed();

	unsigned int getPowerLim(){ return ability.powerLim; }
	unsigned int getAmountLim(){ return ability.amountLim; }
	unsigned int getSpeedLim(){ return ability.speedLim; }

	void setItem(std::shared_ptr<Item>& _item);

	Character& operator =(Character& rside);

private:
	STATUS status;//DEAD, ALIVE, NEAR_DEATH 三種狀態
	std::string appearance;
	std::string name;
	Ability ability;
	std::shared_ptr<Item> item;
};

