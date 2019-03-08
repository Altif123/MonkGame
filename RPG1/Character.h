#pragma once
class Character
{
public:


	Character();
	virtual ~Character();

	//methods
	


	//getters 



	const int& getHp() const {//creates reference to the vairaible hp
		return this->hp;
	}
	
	const int& getSheild() const {//creates reference to the vairaible attack oints 
		return this->sheild;
	}
	

	//setters


private:

	
	int hp;
	int maxhp;
	int sheild;

};
