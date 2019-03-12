#include "pch.h"
#include "Monk.h"


Monk::Monk()
{
	name = "";
	desc = "";
	hp = 0 ;//hp always starts at 10 
	attackpoint = 0;
	sheild = 0 ;
	

}


Monk::~Monk()
{
}

void Monk::initialise(string name, string desc) {//sets monk 
	this->name = name;//specified by the user 
	this->desc = desc;//specified by the user
	this->hp = 15;//hp always starts at 15 

	this->attackpoint = 3;
	this->sheild = 0;
	


}
void Monk::printDetails()const {

	cout << "Monk Name :" << this->name << endl;
	cout << "Monk Description :" << this->desc << endl;//pointers to character 
	cout << "HP :" << this->hp << endl;
}

void Monk::pray()
{
}



void Monk::onScreenDetails() {
	cout << "Monk Name :" << this->name;
	cout << "  |HP :" << this->hp;
	cout << "  |AP :" << this->attackpoint;



}
	



