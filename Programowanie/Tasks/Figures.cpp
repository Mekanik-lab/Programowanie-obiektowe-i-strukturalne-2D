#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Trapeze.h"

//Napisz klasy które opiszą figury geometryczne: 
// trapez, romb, równoległobok, prostokąt i kwadrat.
// Zdefiniuj podstawowe metody.

int main()
{
	setlocale(LC_CTYPE, "polish");
	Rectangle rectangle(5,6,"prostokąt");
	rectangle.ShowInfo();

	Square square(4, "kwadrat");
	square.ShowInfo();

	Parallelogram parallelogram(5,4,5,4,5,"równoległobok");
	parallelogram.ShowInfo();

	Rhombus rhombus(8, 4, 4, 8, 5, "romb");
	rhombus.ShowInfo();

	Trapeze trapeze(6, 5, 5, 4, 5 ,"trapez");
	trapeze.ShowInfo();
}