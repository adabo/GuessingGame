#include "GuessingGame.h"
#include <iostream>
#include <ctime>
#include <cstdarg>
#include <cstdlib>
#include <string>
#include <vector>

// Globals
// *WARNING* 
// Only use Globals when you know what you're doing
bool g_game_over = false;
char g_player_input = '\0';
int  g_rand_num = NULL;
int  g_player_guess = NULL;

void StartGameLoop()
{
	// ------------Run Once-------------//
	ShowMainMenuScreen();               //
	g_player_input = GetMenuChoice();   //
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
	GetPlayerInput(4, "Player. You da' man.", "R", "P", "Q");
	if      (g_player_input == 'R')
	{
		ShowRulesScreen();
	}
	else if (g_player_input == 'P')
	{
		StartNewGame();
	}
	else if (g_player_input == 'Q')
	{
		QuitGame();
	}
}

void StartNewGame()
{
	GetDifficultyChoice();
	StartGuessing();
}

void StartGuessing()
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

void ShowMainMenuScreen()
{
	/* To do */
}

void ShowRulesScreen()
{
	/* To do */
}

void ShowDifficultyScreen()
{
	/* To do */
}

void SetPlayerStats()
{
	/* To do */
}

bool IsGameOver()
{
    return 0;
}

bool IsGuessCorrect()
{
    return 0;
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

	srand(unsigned int(time(NULL)));
    return (rand() % input_to_integer) + 1;
}

void GetGuess()
{
    /* To do */
}

void GetGameOverChoice()
{
    /* To do */
}

void GetPlayerInput(int argcnt, char *param ...)
{ // ("Prompt message", "Condition 1", "Condition2" ...)
	std::vector<std::string> player_inputs;
	// char *temp[20] = {NULL};
	va_list args;
	va_start(args, argcnt);

	for (int i = 0; i < argcnt; i++)
	{
		// temp[i] = va_arg(args, char*);
        player_inputs.push_back(va_arg(args, char*));
	}
	va_end(args);
}

char GetDifficultyChoice()
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

void GetRulesChoice()
{
    /* To do */
}

char GetMenuChoice()
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

void ProcessPlayerInput(char *prompt,
		char arg1, char arg2, char arg3, char arg4)
{
	std::cout << prompt << std::endl;

