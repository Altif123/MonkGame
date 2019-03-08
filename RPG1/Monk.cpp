#include "pch.h"
#include "Monk.h"


Monk::Monk()
{
	name = "";
	desc = "";
	hp = 0 ;//hp always starts at 10 
	maxhp = 0;//hp with a shailed can increase
	attackpoint = 0;
	sheild = 0 ;
	difficulty = 0;

}


Monk::~Monk()
{
}

void Monk::initialise(string name, string desc) {//
	this->name = name;
	this->desc = desc;
	this->hp = 10;//hp always starts at 10 
	this->maxhp = 10;//hp with a shailed can increase
	this->attackpoint = 3;
	this->sheild = 0;
	this->difficulty = 1;


}
void Monk::printDetails()const {

	cout << "Monk Name :" << this->name << endl;
	cout << "Monk Description :" << this->desc<< endl;//pointers to character 
	cout << "HP :" << this->hp << endl;


	

}

