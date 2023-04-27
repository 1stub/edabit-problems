#include <iostream>

std::string doubleSwap(std::string s, char c1, char c2) 
{
	for (int i = 0; i <= s.size(); ++i)
	{
		if (s[i] == c1 || s[i] == c2)
		{
			if (s[i] == c1)
			{
				s[i] = c2;
			}
			else
			{
				s[i] = c1;
			}
		}
	}
//	std::cout << s;
	return s;
}

int doubleSwapTest()
{
	doubleSwap("random w#rds writt&n h&r&", '#', '&');

	return 0;
}