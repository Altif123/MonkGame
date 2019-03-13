#pragma once
#include <string>
#include <iostream>
#include "Character.h"

class Goblin : Character
{
public:
	Goblin();
	virtual ~Goblin();
	void initialise();
	void printDetails() const;

	

	//getters inherited from Character class
	
	


	//setters 

	
	//variables
private:
	
	int difficulty;
};

