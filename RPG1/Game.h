#pragma once

#include "Monk.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <stdlib.h>

class Game
{
public:
	Game();
	virtual ~Game();
	//methods
	void menu();
	void inName();
	void read(string filename);
	void startup();
	void help ();


	//operators 

	//vairables

	//getters
	inline bool getPlaying() const {return this->playing;}
	//setters

private:
	int option;//users option
	bool playing;

	Monk monk;

};

