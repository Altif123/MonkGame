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

 /*
 if number less than 
 then generate this type of room 
 if room with 3 goblins loop 3 times
 
 
 */

//setters
Room::Room()
{
}


Room::~Room()
{
}
