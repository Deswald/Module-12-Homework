#include <iostream>

bool IsKPeriodic(std::string txt, int k)
{
	if (k > 0)
	{
		int txtSize = txt.size();
		for (int i = 0; i < txtSize;)
		{
			for (int j = 0; j < k; j++)
			{
				if (txt[i] == txt[j])
				{
					i++;
				}
				else
				{
					std::cout << "Wrong: " << "The string " << txt << " is not a multiple of " << k << std::endl;
					return true;
				}
			}
		}
		std::cout << "Successfully: " << "The string " << txt << " is a multiple of "
			<< k << std::endl;
		return true;
	}
	std::cout << "The number K must be greater than 0" << std::endl;
	return false;
}

int main()
{
	IsKPeriodic("AAAAAA", 1);
	IsKPeriodic("AAAAAA", 2);
	IsKPeriodic("AAAAAA", 3);
	IsKPeriodic("AAAAAA", 4);
	IsKPeriodic("AAAAAA", 5);
	IsKPeriodic("AAAAAA", 6);
	std::cout << std::endl;

	IsKPeriodic("abcabcabcabc", 0);
	IsKPeriodic("abcabcabcabc", 1);
	IsKPeriodic("abcabcabcabc", 3);
	IsKPeriodic("abcabcabcabc", 4);
	IsKPeriodic("abcabcabcabc", 6);
	std::cout << std::endl;

	IsKPeriodic("QWERTYQWERTY", 3);
	IsKPeriodic("QWERTYQWERTY", 6);
	IsKPeriodic("QWERTYQWERTY", 12);
	std::cout << std::endl;

	return 0;
}