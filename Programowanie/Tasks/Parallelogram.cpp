#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double h)
{
	sideA = a;
	sideB = b;
	heightH = h;
}

void Parallelogram::ShowInfo()
{
	std::cout << "Informacje o r�wnoleg�oboku:\n";
	std::cout << "Bok A = " << sideA << "\n";
	std::cout << "Wysoko�� h = " << heightH << "\n";
	std::cout << "Obw�d = " << GetPerimeter() << "\n";
	std::cout << "Pole = " << GetArea() << "\n";
}

double Parallelogram::GetPerimeter()
{
	return 2 * sideA + 2 * sideB;
}

double Parallelogram::GetArea()
{
	return sideA * heightH;
}