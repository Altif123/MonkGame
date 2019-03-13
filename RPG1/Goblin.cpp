#include "pch.h"
#include "Goblin.h"



Goblin::Goblin()
{

		name = "";
		hp = 0;//hp always starts at 10 
		attackpoint = 0;
		


	
}


Goblin::~Goblin()
{
}
	

void Goblin::initialise()
{
	this->name = "Goblin";//specified by the user 
	this->hp = 10;//hp always starts at 10
	this->attackpoint = 2;
}
void Goblin::printDetails()const {

	cout << "Goblin Name :" << this->name << endl;
	cout << "HP :" << this->hp << endl;
	cout << "AP :" << this->attackpoint << endl;


}