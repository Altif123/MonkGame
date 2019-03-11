#pragma once
#include <string>
#include <iostream>
using namespace std;

class Monk
{
public:
	Monk();
	virtual ~Monk();

	//methods
	void initialise(string name, string desc);
	void onScreenDetails();
	void printDetails() const;
	

	//getters 
	

	const std::string& getName() const {//creates reference to the vairaible name 
		return this->name;
	}
	const std::string& getDesc() const {//creates reference to the vairaible name 
		return this->desc;
	}
	const int& getHp() const {//creates reference to the vairaible hp
		return this->hp;
	}
	const int& getMaxhp() const {//creates reference to the vairaible max hp
		return this->maxhp;
	}
	const int& getAttackpoint() const {//creates reference to the vairaible attack points 
		return this->attackpoint;
	}
	const int& getSheild() const {//creates reference to the vairaible attack oints 
		return this->sheild;
	}
	const int& getDifficulty() const {//creates reference to the vairaible attack oints 
		return this->difficulty;
	}

	//setters
	

private:

	string name;
	string desc;
	int hp;
	int maxhp;
	int attackpoint;
	int sheild;
	int difficulty;

};

