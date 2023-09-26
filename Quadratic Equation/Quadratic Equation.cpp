// Quadratic Equation.cpp 

#include <iostream>
#include <cmath>

int main()
{
	double a, b, c;

	//This is the input for the coefficients a, b, and c
	std::cout << "Enter coefficient a: ";
	std::cin >> a;
	std::cout << "Enter coefficient b: ";
	std::cin >> b;
	std::cout << "Enter coefficient c: ";
	std::cin >> c;

	//Calculations are completed here and output
	double discriminant = b * b - 4 * a * c;

	if (discriminant < 0) {
		std::cout << "The roots are imaginary" << std::endl;
	}
	else if (discriminant == 0) {
		double x = -b / (2 * a);
		std::cout << "The roots are real and equal" << std::endl;
		std::cout << "x1 = x2 " << x << std::endl;
	}
	else {
		double x1 = (-b + sqrt(discriminant)) / (2 * a);
		double x2 = (-b - sqrt(discriminant)) / (2 * a);
		std::cout << "The roots are real and unequal" << std::endl;
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x2 = " << x2 << std::endl;
	}
	return(0);
}
