#include "GuessingGame.h"
#include <iostream>
#include <ctime>
#include <cstdarg>
#include <cstdlib>
#include <string>
#include <array>

enum ScreenStates
{
	MAINMENU, DIFFICULTY, GAMEOVER, RULES
};
	

// Globals
// *WARNING* 
// Only use Globals when you know what you're doing
bool g_game_over = false;
char g_player_input = '\0';
char g_return_input= NULL;
int  g_rand_num = NULL;
int  g_player_guess = NULL;

void StartGameLoop()
{
	// ------------Run Once-------------//
	ShowMainMenuScreen();               //
	GetPlayerInput(
			"What would you like to do?\n[R]ules [P]lay [Q]uit]",
			"Try again.",
			'R', 'P', 'Q');
	ProcessPlayerInput("mainmenu");
	// DoPlayerChoice();                   //
	//----------------------------------//

	// Game loop
	while(!g_game_over)
	{
		break;
	}
}

void ProcessPlayerInput(std::array current_screen)
{
	switch (ScreenStates)
	{
	case: MAINMENU
		  ShowScreen();
	case: DIFFICULTY
		  StarGuessing();
	case: GAMEOVER


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

void GetRulesChoice()
{
    /* To do */
}

void GetMenuChoice()
{

}

void GetPlayerInput(char *prompt_choice, char *prompt_error,
		char arg1, char arg2, char arg3, char arg4)
{
	bool can_break = false;
	std::cout << prompt << std::endl;
    std::cin >> g_player_input;

	while (!can_break)
	{
		if (g_player_input == arg1)
	    {
		        g_return_input = arg1;
		}
	    else if (g_player_input == arg2)
	    {
		        g_return_input = arg2;
		}
	    else if (g_player_input == arg3)
	    {
		        g_return_input = arg3;
		}
	    else if (g_player_input == arg4)
	    {
		        g_return_input = arg4;
		}
		else
		{
				std::cout << prompt_error << std::endl;
		}
	}
}

