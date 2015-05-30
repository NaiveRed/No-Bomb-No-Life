#include "Pin.h"
#include"Character.h"

Pin::Pin() :Item("Pin", 0, 0, 0)
{
	
}


Pin::~Pin()
{
}
void Pin::BeUsed(Character& target)
{
	if (target.getStatus() == NEAR_DEATH)
		target.setStatus(ALIVE);
}