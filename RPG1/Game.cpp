


#include "pch.h"
#include "Game.h"
#include <Windows.h>
#include "Goblin.h"


using namespace std;

//all the start up info so:
//enter number of rooms
//enter name and desc 

Game::Game()
{
	option = 0;
	playing = true;//always set as true, to start game  
}
Game::~Game()
{
}
//methods 
void Game::inName(){//initialises the monks name 
	string name;
	string desc;
	cout << "Enter Monk Name: " ;
	getline(cin, name);
	cout << "Enter Monk description: ";
	getline(cin, desc);
	cout << desc;
	monk.initialise(name, desc);
	goblin.initialise();
	


	
	

}


void Game::read(string filename) {
	string line;
	ifstream  file(filename);
	if (file.is_open()) {
		while (getline(file, line)) {
			cout << line << '\n';
		}
		file.close();
	}
	else {
		cout << "unable to open file" << endl ;
	}
}
void Game::startup() {
	read("welcome.txt");
}
void Game::help() {
	
	read("howtoplay.txt");
	_getch();
	menu();
	
}
void Game::storyBoard() {//sets the story
	read("story1.txt");
	Sleep(2000); // pauses for 1 seconds
	system("CLS");
	read("story2.txt");
	Sleep(2000); // pauses for 1 seconds
	system("CLS");
	 

}

void Game::menu() {

	cout << "Menu" << endl;
	cout << "0: End the game" << endl;
	cout << "1:Start game" << endl;
	cout << "2:print details" << endl;
	cout << "3:Enter number of levels" << endl;
	cout << "4:How to play the game" << endl;//calls method to read howtoplay.txt file 
	cout << endl << "option: ";

	cin >> option;

	switch (option)

	{
	case 0:
		playing = false;
		break;
	case 1:
		monk.onScreenDetails();
		break;
	case 2:
		monk.printDetails();
		goblin.printDetails();
		break;
	case 3:
		//call method
		break;
	case 4:
		system("CLS");
		help();
		break;
	default:
		break;
	}


}

