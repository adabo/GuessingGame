void StartNewGame();
void StartGameLoop();
void StartGuessing();
void ShowRulesScreen();
void ShowMainMenuScreen();
void ShowDifficultyScreen();
bool IsGuessCorrect();
bool IsGameOver();
void SetPlayerStats();
void QuitGame();
void DoPlayerChoice();
void ProcessPlayerInput(char *prompt, char arg1, char arg2 = 0,
		char arg3 = 0, char arg4 = 0)

// Getters
int  GetRandomNumber();
char GetMenuChoice();
char GetDifficultyChoice();
void GetGuess();
void GetGameOverChoice();
void GetRulesChoice();
void GetPlayerInput(int argcnt, char *param ...);
