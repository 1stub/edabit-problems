#include <iostream>
#include <vector>

// only works for a singular integer that occurs an odd number of times
int findOdd(std::vector<int> arr) 
{
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = min; i >= min && i <= max; ++i)
	{
		int countNum = std::count(arr.begin(), arr.end(), i);
		if (countNum % 2 != 0)
		{
			return i;
		}

	}
}

int main()
{
	std::vector<int>testVals { 1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5 };
	int oddNum = findOdd(testVals);
	std::cout << oddNum;
}
