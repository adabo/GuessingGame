#include <iostream>
#include <ostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	int guess = 0;
	int answer = 0;
	int rdstate = 0;
    srand(time(NULL));
	answer = rand() % 10;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Guess: ";
		std::cin >> guess;
        std::cin.clear();
		rdstate = std::cin.rdstate();
		std::cout << guess << " " << answer << std::endl;
		if (guess == answer)
		{
			std::cout << "Win." << std::endl;
			break;
		}
		else
		{
			std::cout << "Nope." << std::endl;
		}
		std::cout << "rdstate = " << rdstate;
        
		std::cout << std::endl;
		std::cout << std::flush;
        
		guess = NULL;
    }
    return 0;
}

