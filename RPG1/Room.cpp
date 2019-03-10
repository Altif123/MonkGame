#include "pch.h"
#include "Room.h"
#include <stdlib.h>

//methods
 int Room::randGen()//generates a random number 
{
	roomNumber = rand() % 100 + 1;

	return roomNumber;
}
//getters

//setters
Room::Room()
{
}


Room::~Room()
{
}
