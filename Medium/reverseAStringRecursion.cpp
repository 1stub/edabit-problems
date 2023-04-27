#include <iostream>

// still kinda struggling with recursion
std::string reverse(std::string str) 
{
	if (str.length() == 0) return "";
	else return reverse(str.substr(1)) + *str.begin();
}

int main()
{
	reverse("Hello, World!");
}
