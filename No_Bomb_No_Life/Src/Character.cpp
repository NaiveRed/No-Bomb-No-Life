#include "Character.h"
#include<iostream>
Character::~Character()
{

}
Character::Character(Character &copy)
	:
	status(copy.status),
	appearance(copy.appearance),
	name(copy.name),
	ability(copy.ability)
{}
void Character::UseItem()
{
	if (item)
	{
		item->BeUsed(*this);
		item = nullptr;//shared_ptr(nullptr_t)
	}
}
void Character::setPower(int change)
{
	if (!ability.power && change < 0)
		return;
	else  ability.power = (ability.power + change) <= ability.powerLim ? ability.power + change : ability.powerLim;
}
unsigned int Character::getPower()
{
	return ability.power;
}

void Character::setAmount(int change)
{
	if (!ability.amount && change < 0)
		return;
	else ability.amount = (ability.amount + change) <= ability.amountLim ? ability.amount + change : ability.amountLim;
}
unsigned int Character::getAmount()
{
	return ability.amount;
}

void Character::setSpeed(int change)
{
	if (!ability.speed && change < 0)
		return;
	else  ability.speed = (ability.speed + change) <= ability.speedLim ? ability.speed + change : ability.speedLim;
}
unsigned int Character::getSpeed()
{
	return ability.speed;
}

void Character::setItem(std::shared_ptr<Item>& _item)
{
	item = _item;
	if (item->getType() == PASSIVE)
		this->UseItem();
	else;//do something...
}
Character& Character::operator =(Character& rside)
{
	if (this == &rside)
		return *this;
	else
	{
		status = rside.status;
		appearance = rside.appearance;
		name = rside.name;
		ability = rside.ability;
	}
	return *this;
}