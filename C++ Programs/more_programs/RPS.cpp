#include <iostream>
#include <string>
using namespace std;

int main() {

	int score1 = 0, score2 = 0, tie = 0;
	char p1, p2;
	string check;

	cout << "Welcome to Rock, Paper, Scissors." << endl;

	do {

		cout << "P1, please enter your choice [P/R/S]" << endl;
		cin >> p1;

		cout << "P2, please enter your choice [P/R/S]" << endl;
		cin >> p2;

		p1 = toupper(p1);
		p2 = toupper(p2);

		if (p1 == p2) {

			cout << "Nobody wins..." << tie++ << endl;
		}

		else {

			switch (p1) {

			case 'P':

				if (p2 == 'R') {
					cout << "Paper covers rock.\nP1 wins!" << endl;
					score1++;
				}

				else {
					cout << "Scissors cut paper.\nP2 wins!" << endl;
					score2++;
				}

				break;

			case 'R':

				if (p2 == 'S') {
					cout << "Rock breaks scissors.\nP1 wins!" << endl;
					score1++;
				}

				else {
					cout << "Paper covers rock.\nP2 wins!" << endl;
					score2++;
				}

				break;

			case 'S':

				if (p2 == 'P') {
					cout << "Scissors cut paper.\nP1 wins" << endl;
					score1++;
				}

				else {
					cout << "Rock breaks scissors\nP2 wins." << endl;
					score2++;
				}

				break;

			}

		}

		cout << "Scores:" << endl;

		cout << "P1: " << score1 << endl;
		cout << "P2: " << score2 << endl;
		cout << "Ties: " << tie << endl;

		cout << "Continue? [y/n]" << endl;
		cin >> check;

	} 
	
	while (check == "y" || check == "Y");

	return 0;

}