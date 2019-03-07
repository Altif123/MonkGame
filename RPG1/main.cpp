#include "pch.h"
#include "main.h"

#include "Game.h"

using namespace std;

main::main()
{
}


main::~main()
{
}


int main()
{

	Game game;
	game.startup();
	game.inName();
	system("CLS");
	game.read("header.txt");
	game.menu();



}
