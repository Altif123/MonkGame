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

	

	//getters
	const std::string& getName() const {//creates reference to the vairaible name 
		return this->name;
	}
	const int& getHp() const {//creates reference to the vairaible hp
		return this->hp;
	}
	const int& getAttackpoint() const {//creates reference to the vairaible attack points 
		return this->attackpoint;
	}
	


	//setters 

	
	//variables
private:
	
	int difficulty;
};

