#include <iostream>
#include <fstream>
#include <vector>
//Matura 2022 Informatyka Poziom Rozszeżony

int main()
{
	std::ifstream file("przyklad.txt");
	std::vector<int> numbers;
	int number;
	
	while (file >> number)
	{
		numbers.push_back(number);
	}
}