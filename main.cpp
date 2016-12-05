#include <iostream>

int main()
{
	char blocks[21][3] = {{0, 'B', 'O'},
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
						  {0, 'Z', 'M'},
						  {1,0,0}};
	char word[10] = "ABEL";
	
	for (int i_word = 0; word[i_word] != '\0' && blocks[20][0] == 1; i_word++)
	{
		for (int i_block = 0; i_block < 20; i_block++)
		{
			if (blocks[i_block][0] == 1)
			{
				continue;
			}
			else if (blocks[i_block][1] == word[i_word] ||
				blocks[i_block][2] == word[i_word])
			{
				blocks[i_block][0] = 1;
				break;
			}
			else if (i_block == 19)
			{
				blocks[20][0] = 0;
                break;
			}
		}
	}
	if (blocks[20][0] == 1)
	{
		std::cout << "Possible.";
	}
	else
	{
		std::cout << "Not possible.";
	}
	
	return 0;
}

