#include <iostream>

int main()
{
	char blocks[20][3] = {{0, 'B', 'O'},
						  {0, 'X', 'K'},
						  {0, 'D', 'Q'},
						  {0, 'C', 'P'},
						  {0, 'N', 'A'},
						  {0, 'G', 'T'},
						  {0, 'R', 'E'},
						  {0, 'T', 'G'},
						  {0, 'Q', 'D'},
						  {0, 'F', 'S'},
						  {0, 'J', 'W'},
						  {0, 'H', 'U'},
						  {0, 'V', 'I'},
						  {0, 'A', 'N'},
						  {0, 'O', 'B'},
						  {0, 'E', 'R'},
						  {0, 'F', 'S'},
						  {0, 'L', 'Y'},
						  {0, 'P', 'C'},
						  {0, 'Z', 'M'}};
	bool is_break = false;
	bool is_possible = false;
	char word[10] = "ABEL";
	
	for (int i_word = 0; word[i_word] != '\0'; i_word++)
	{
        is_possible = false;
		for (int i_block = 0; i_block < 20; i_block++)
		{
			for (int ltr = 1; ltr < 3 &&
					blocks[i_block][0] != 1; ltr++)
			{
				if (blocks[i_block][ltr] == word[i_word])
				{
					blocks[i_block][0] = 1;
					is_possible = true;
					is_break = true;
					break;
				}
			}
			if (is_break == true)
			{
                is_break = false;
				break;
			}
		}
		if (is_possible == false)
		{
			std::cout << "Not possible.";
			break;
		}
	}
	if (is_possible == true)
	{
		std::cout << "Possible.";
	}
	
	return 0;
}

