#include "GuessingGame.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

// Initialize vars
enum ScreenState
{
	MAINMENU, RULES, DIFFICULTY, GUESS, GAMEOVER
};

// Globals
// *WARNING* 
// Only use Globals when you know what you're doing
ScreenState g_current_screen = MAINMENU;
char        g_player_input = NULL;
bool        g_quit = false;
bool        g_game_over = false;
char        g_return_input= NULL;
int         g_rand_num = NULL;
int         g_player_guess = NULL;

void StartGameLoop()
{
    bool is_game_over = false;
	//======= Run Once ======= //
	RunScreenMainMenu();     //
    //======================== //

	while (!g_quit)
	{
		SetScreenState(/* g_current_screen */);
        std::cout << "to do" << std::endl;
	}
}

void QuitGame()
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

void GetPlayerInput(char *prompt, char *error_prompt,
		char arg1, char arg2, char arg3, char arg4)
{
	std::cout << prompt << std::endl;

	while (std::cin >> g_player_input)
	{
		if (g_player_input != arg1 &&
			g_player_input != arg2 &&
			g_player_input != arg3 &&
			g_player_input != arg4)
		{
			std::cout << error_prompt << std::endl;
			continue;
		}
		else
		{
			break;
		}
	}
}

void SetScreenState(/* ScreenState current_screen */)
{
	switch (g_current_screen)
	{
		case MAINMENU:
			RunScreenMainMenu();
            break;
		case RULES:
			RunScreenRules();
            break;
		case DIFFICULTY:
			RunScreenDifficulty();
            break;
		case GUESS:
			RunScreenGuess();
            break;
		case GAMEOVER:
			RunScreenGameOver();
            break;
		default:
			std::cout << "default" << std::endl;
            break;
	}
}

void RunScreenMainMenu()
{
	std::cout << "Welcome to Guessing Game!\n" << std::endl;
	GetPlayerInput(
		"What would you like to do?\n[R]ules [P]lay [Q]uit",
		"Please enter R P or Q.", 'R', 'P', 'Q');

	if      (g_player_input == 'R')
	{
		g_current_screen = RULES;
	}
	else if (g_player_input == 'P')
	{
		g_current_screen = DIFFICULTY;
	}
	else if (g_player_input == 'Q')
	{
		g_quit = true;
	}
}

void RunScreenDifficulty()
{
	/* to do */
}

void RunScreenRules()
{
	/* to do */
}

void RunScreenGuess()
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

void RunScreenGameOver()
{
	/* to do */
}
