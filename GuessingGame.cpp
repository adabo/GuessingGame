#include "GuessingGame.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

// Globals
// *WARNING* 
// Only use Globals when you know what you're doing
bool g_game_over = false;
char g_player_input = '\0';

void GameLoop()
{
	// ------------Run Once-------------//
	ShowMainMenu();                     //
	g_player_input = GetPlayerChoice(); //
	DoPlayerChoice();                   //
	//----------------------------------//

	// Game loop
	while(!g_game_over)
	{
		break;
	}
}

void DoPlayerChoice()
{
	if      (g_player_input == 'R')
	{
		ShowRules();
	}
	else if (g_player_input == 'P')
	{
		BeginGame();
	}
	else if (g_player_input == 'Q')
	{
		QuitGame();
	}
}

void BeginGame()
{
	GetDifficulty();
	PlayDifficulty();
}

char GetPlayerChoice()
{
	bool can_break = false;
	// char g_player_input = NULL;

	while(!can_break)
	{
		std::cin >> g_player_input;
		if      (g_player_input == 'R');
		else if (g_player_input == 'P');
		else if (g_player_input == 'Q');
		else
		{
			std::cout << "Please choose R, P, or Q." << std::endl;
			continue;
		}
        can_break = !can_break;
	}
	return g_player_input;
}

void PlayDifficulty()
{
	if      (g_player_input == 10)
	{
		GetRandomNumber();
	}
	else if (g_player_input == 50)
	{
		GetRandomNumber();
	}
	else if (g_player_input == 100)
	{
		GetRandomNumber();
	}
	else if (g_player_input == 1000)
	{
		GetRandomNumber();
	}
}

void QuitGame()
{
	/* To do */
}

char GetDifficulty()
{ // 1-10, 1-50, 1-100, 1-100

	std::cin >> g_player_input;
	if      (g_player_input == 10);
	else if (g_player_input == 50);
	else if (g_player_input == 100);
	else if (g_player_input == 1000);
	else
	{
		std::cout << "Choose again." << std::endl;
	}

	return 0;
}

void ShowMainMenu()
{
	/* To do */
}

void ShowRules()
{
	/* To do */
}

int GetRandomNumber()
{ // CPU random number

    return 0;
}

bool IsGuessCorrect()
{
    return 0;
}

void SetPlayerStats()
{
	/* To do */
}

bool IsGameGameOver()
{
    return 0;
}

