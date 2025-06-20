#include <iostream>
#include <ctime>
using namespace std;
int selectLevel() {

	return 0;
}
int main() {
	int number, result = 0, lives = 0, answer, attempts = 0;
	cout << "Welcome to the Number Guessing Game!" << endl;
	cout << "I'm thinking of a number between 1 and 100." << endl;
	cout << "You have a certain number of chances to guess the number." << endl;
	cout << endl;
	cout << "Please select the difficulty level:" << endl;
	cout << "1. Easy (10 chances)" << endl;
	cout << "2. Medium (5 chances)" << endl;
	cout << "3. Hard (3 chances)" << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> number;
	cout << endl;
	cout << "Let's start the game!" << endl;

	switch (number) {
	case 1:
		lives = 10;
		cout << "Great! You have selected the Easy difficulty level." << endl;
		break;
	case 2:
		lives = 5;
		cout << "Great! You have selected the Medium difficulty level." << endl;
		break;
	case 3:
		lives = 3;
		cout << "Great! You have selected the Hard difficulty level." << endl;
		break;
	default:
		break;
	}
	srand(time(NULL));
	result = rand() % 101;
	cout << endl;
	while (true) {
		cout << "Enter your guess: ";
		cin >> answer;
		if (lives == 0) {
			break;
		}
		if (answer > result) {
			cout << "Incorrect! The number is less than " << answer << endl;
			attempts++;
			lives--;
		}
		else if (answer < result) {
			cout << "Incorrect! The number is greater than " << answer << endl;
			attempts++;
			lives--;
		}
		else {
			cout << "Congratulations! You guessed the correct number in ";
			cout << attempts << " attempts." << endl;
			break;
		}
	}
	return 0;
}