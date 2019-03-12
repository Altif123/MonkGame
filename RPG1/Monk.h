#pragma once
#include <string>
#include <iostream>
#include "Character.h"
using namespace std;

class Monk : public Character
{
public:
	Monk();
	virtual ~Monk();

	//methods
	void initialise(string name, string desc);
	void onScreenDetails();
	void printDetails() const;
	void pray();
	// startGame();
	

	//getters 
	
	const std::string& getName() const {//creates reference to the vairaible name 
		return this->name;
	}
	const int& getHp() const {//creates reference to the vairaible hp
		return this->hp;
	}
	
	const std::string& getDesc() const {//creates reference to the vairaible name 
		return this->desc;
	}

	const int& getAttackpoint() const {//creates reference to the vairaible attack points 
		return this->attackpoint;
	}
	const int& getSheild() const {//creates reference to the vairaible attack oints 
		return this->sheild;
	}
	

	//setters
	const int& sethp() const {//creates reference to the vairaible attack oints 
		return this->hp;
	}
	
//vairables 
private:

	string name;
	string desc;
	int hp;
	int attackpoint;
	int sheild;


};

