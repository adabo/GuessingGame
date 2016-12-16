void StartGameLoop();
bool IsGuessCorrect();
bool IsGameOver();
void QuitGame();
void RunScreenMainMenu();
void RunScreenDifficulty();
void RunScreenRules();
void RunScreenGuess();
void RunScreenGameOver();
void SetPlayerStats();
void SetScreenState(/* ScreenState current_screen */);
void GetPlayerInput(char *prompt, char *error_prompt,
	char arg1, char arg2 = 0, char arg3 = 0, char arg4 = 0);