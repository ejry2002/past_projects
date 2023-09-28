#include <iostream>
using namespace std;

int main() 
{
	double Month = 00, Day = 00, Year = 0000;
	double Years, Days, Hours;

	cout << "Please enter your Date of Birth:" << endl;

	cout << "Month:" << endl;
	cin >> Month;

	cout << "Day:" << endl;
	cin >> Day;

	cout << "Year" << endl;
	cin >> Year;

	cout << "******************************************" << endl;

	cout << "Your Date of Birth is: " << Month << "/" << Day << "/" << Year << endl;
	cout << "You are: " << endl;

	Years = 2023 - Year;
	Days = 365 * Years;
	Hours = 24 * Days;

	cout << Years << " Years old." << endl;
	cout << Days << " Days old." << endl;
	cout << Hours << " Hours old." << endl;

	cout << "(Not including leap years.)" << endl;

	return 0; 
}
