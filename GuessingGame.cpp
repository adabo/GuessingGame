#include "GuessingGame.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

// Globals
// *WARNING* 
// Only use Globals when you know what you're doing
bool g_game_over = false;
char g_player_input = '\0';
int g_rand_num = NULL;
int g_player_guess = NULL;

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
    std::cout << "RPQ" << std::endl;
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
	bool is_correct = false;
	g_rand_num = GetRandomNumber();
	
	while(!is_correct)
	{
		std::cout << "Make your Guess." << std::endl;
		std::cin >> g_player_guess;

		if (g_player_guess == g_rand_num)
		{
			std::cout << "You win!" << std::endl;
		}
		else if (g_player_guess< g_rand_num)
		{
			std::cout << "Higher." << std::endl;
		}
		else
		{
			std::cout << "Lower." << std::endl;
		}
	}
}

void QuitGame()
{
	/* To do */
}

char GetDifficulty()
{ // 1-10, 1-50, 1-100, 1-100

	bool can_break = false;
    std::cout << "1 2 3 4." << std::endl;
	std::cin >> g_player_input;

	while(!can_break)
	{
		if      (g_player_input == '1');
		else if (g_player_input == '2');
		else if (g_player_input == '3');
		else if (g_player_input == '4');
		else
		{
			std::cout << "Choose again." << std::endl;
			continue;
		}
		can_break = true;
	}
	return g_player_input;
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
	int input_to_integer = NULL;

	if (g_player_input == '1')
	{
		input_to_integer = 10;
	}
	else if (g_player_input == '2')
	{
		input_to_integer = 50;
	}
	else if (g_player_input == '3')
	{
		input_to_integer = 100;
	}
	else
	{
		input_to_integer = 1000;
	}

	srand(time(NULL));
    return (rand() % input_to_integer) + 1;
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

