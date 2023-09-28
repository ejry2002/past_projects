#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	
	double x = 0, y = 0, z = 0, m = 0, d = 0, s = 0, q = 0, t = 0; // establishes variables
	float r = 0, o = 0; // establishes variables for cmath functions
	string check; // variable for loop
	
	do {

		cout << "Enter x: ";
		cin >> x; // inputs the first value x
		cout << endl;

		cout << "Enter y: ";
		cin >> y; // enters the second value y
		cout << endl;

		z = x + y; // adds x and y together to equal z
		s = x - y; // subtracts x and y to equal s

		m = x * y; // multiplies x and y together to equal m
		d = y / x; // divides x and y to equal d

		q = pow(x,2); // squares x to equal q
		t = pow(y,2); // squares y to equal t

		r = sqrt(x); // square root of x equals r
		o = sqrt(y); // square root of y equals o

		cout << "Sum = " << z << endl; // displays sum
		cout << "Difference = " << s << endl; // displays difference

		cout << "Product = " << m << endl; // displays product
		cout << "Quotient = " << d << endl; // displays quotient

		cout << "x^2 = " << q << endl; // displays x squared
		cout << "y^2 = " << t << endl; // displays y squared 

		cout << "Square root of x = " << r << endl; // displays sqrt of x
		cout << "Square root of y = " << o << endl; // displays sqrt of x

		cout << "Continue? (Y/N)" << endl;
		cin >> check;

	}

	while (check == "Y" || check == "y");

	return 0;

}