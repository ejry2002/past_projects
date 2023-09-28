#include <iostream>
#include <string>
using namespace std;

int main() {

	int marks; // variable for grade
	string check; // variable for loop

	do { // start of  loop

		cout << "Please enter your grade: " << endl; 
		cin >> marks;

		if (marks >= 90) { // if grade is greater than or equal to 90, then A

			cout << marks << " is an A." << endl;
		}

		else if (marks >= 80) { // if grade is greater than or equal to 80, then B

			cout << marks << " is a B." << endl;
		}

		else if (marks >= 70) { // if grade is greater than or equal to 70, then C

			cout << marks << " is a C." << endl;
		}

		else if (marks >= 64) { // if grade is greater than or equal to 60, then D

			cout << marks << " is a D." << endl;
		}

		else if (marks < 64) { // if grade is less 64, then F

			cout << marks << " is an F." << endl;
		}

		cout << "Enter another grade? (Y/N)" << endl; // asks for input to continue loop
		cin >> check;

	}

	while (check == "Y" || check == "y"); // if user inputs Y or y, then the loop continues

	return 0;

}

