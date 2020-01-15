
#include <iostream>
#include <stdlib.h>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

using namespace std;

class GuessNumber {

public:
	void start() {

		int number = (rand() % 1000);
		int user_input = 0;
		int tries = 0;
		cout << CYAN << "################### GUESS THE NUMBER ###################" << MAGENTA << endl;

		while (user_input != number) {
			tries += 1;
			cin >> user_input;

			if (user_input < number) {
				system("cls");
				cout << CYAN << "################### GUESS THE NUMBER ###################" << MAGENTA << endl;
				cout << RED << "+ " << RESET << "The number is greater than " << user_input << endl;
			}
			else if (user_input > number) {
				system("cls");
				cout << CYAN << "################### GUESS THE NUMBER ###################" << MAGENTA << endl;
				cout << RED << "- " << RESET << "The number is less than " << user_input << endl;
			}
			else {
				continue;
			}

		}

		if (user_input == number) {
			string user_input_2;
			system("cls");
			cout << CYAN << "################### GUESS THE NUMBER ###################" << MAGENTA << endl;
			cout << GREEN << "Correct! " << RESET << "The number was correct (" << number << "), good job!" << endl;
			cout << YELLOW << "Tries: " << GREEN << tries << RESET << endl;
			cout << MAGENTA << "Do you want to continue? (y/n)" << RESET << endl;
			cout << BLUE << "Input: " << RESET;
			cin >> user_input_2;

			if (user_input_2 == "y" || user_input_2 == "Y") {
				system("cls");
				start();
			}

		}

	}

};

int main() {
	GuessNumber game;
	game.start();
	return 0;
}