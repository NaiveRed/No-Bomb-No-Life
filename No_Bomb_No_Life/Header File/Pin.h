#pragma once
#include "Item.h"
class Pin :
	public Item
{
public:
	Pin();
	~Pin();

	void BeUsed(Character&);
	int getType(){ return ACTIVE; }
};

