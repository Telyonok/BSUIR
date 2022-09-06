#pragma once
#include <iostream>
#include "Puzzle.h"

using namespace std;

static class Menu
{
public:
	void StartUpMenu();
private:
	Puzzle *puzzle;
	int LevelChoice();
	void PrintMenu();
	void StartGame();
	void Congratulate();
	int GetPlayerChoice();
};

