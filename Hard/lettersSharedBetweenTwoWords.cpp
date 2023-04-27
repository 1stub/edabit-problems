#include <iostream>
#include <vector>

int sharedLetters(std::string str1, std::string str2) {
	int total{};
	for (char x : str1)
	{
		for (int i = 0; i < str1.length(); i++)
		{
			for (int j = i + 1; j < str1.length(); j++)
			{
				if (str1[i] == str1[j])
				{
					str1.erase(i, 1);
				}
			}
		}
		for (int i = 0; i < str2.size(); ++i)
		{
			if (str2[i] == x)
			{
				++total;
			}
		}
	}
	return total;
}

int main()
{
	int y = sharedLetters("class", "last");
	std::cout << y;
}