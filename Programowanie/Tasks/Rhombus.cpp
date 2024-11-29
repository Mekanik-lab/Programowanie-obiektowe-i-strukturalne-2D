#include "Rhombus.h"

Rhombus::Rhombus(double da, double db, double a)
{
	diagonalA = da;
	diagonalB = db;
	sideA = a;
};

void Rhombus::ShowInfo()
{
	std::cout << "Informacje o rombie:\n";
	std::cout << "Bok A = " << sideA << "\n";
	std::cout << "Przek�tna A = " << diagonalA << "\n";
	std::cout << "Przek�tna B = " << diagonalB << "\n";
	std::cout << "Obw�d = " << GetPerimeter() << "\n";
	std::cout << "Pole = " << GetArea() << "\n";
}
double Rhombus::GetPerimeter()
{
	return 4 * sideA;
}
double Rhombus::GetArea()
{
	return 0.5 * diagonalA * diagonalB;
}