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

// Getters
int  GetRandomNumber();
char GetMenuChoice();
char GetDifficultyChoice();
void GetGuess();
void GetGameOverChoice();
void GetRulesChoice();
void GetPlayerInput(int argcnt, char *param ...);