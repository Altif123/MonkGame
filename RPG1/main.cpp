#include "pch.h"
#include "main.h"
#include "Game.h"
#include <ctime>

using namespace std;

main::main()
{
}


main::~main()
{
}


int main()
{
	srand(time(NULL));
	Game game;
	game.storyBoard();
	game.startup();
	game.inName();
	system("CLS");
	game.read("header.txt");
	game.menu();



}
