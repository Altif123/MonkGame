#pragma once
#include <string>
using namespace std;

class Character
{
public:
	string name;
	int hp;
	int attackpoint;


	Character();
	virtual ~Character();

	//methods
	void defend();
	void attack();


	//getters 
	const std::string& getName() const {//creates reference to the vairaible name 
		return this->name;
	}
	const int& getHp() const {//creates reference to the vairaible hp
		return this->hp;
	}
	//setters


private:

	
	

};
