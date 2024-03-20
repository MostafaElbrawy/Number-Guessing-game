#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


bool AnotherRound() {


	char again;

	cout << "\nDo you want to play again? (Y/N) : ";
	cin >> again;

		do {

			

			if (again == 'y' || again == 'Y')
			{
				system("cls");
				return true;
			}

			else if (again == 'n' || again == 'N')
			{
				cout << "\nSee you in the next game :) " << endl;
				exit(0);
			}

			else
			{
				do {
					cout << "\nWrong choice, please choose (Y/N) : ";
					cin >> again;

				} while (again != 'y' && again != 'Y' && again != 'n' && again != 'N');
			}
		}while (true);


 }


void Game(){

	srand(time(0));

	int rightAnswer = rand() % 100 + 1;
	int guess;

	cout << "Guess a number from 1 to 100 \n";

	while (true) {

		cin >> guess;

		if(!(guess>=0 && guess<=100)) {
			cout << "Wrong number, the guess should be between 1 to 100\n";
			cout << "Try another number: \n";
			
		}

		else if (guess == rightAnswer) {
			cout << "\nFantastic! You got it :)\n";
			break;
		}

		else if (guess > rightAnswer)
			cout << "Try smaller :(\n";

		else
			cout << "Try bigger :(\n";

	}


}


void StartGame() {

	cout << "NUMBER GUESSING GAME WELCOMES YOU, GET READY!\n\n";

	do {

		Game();

	}while (AnotherRound());

}


int main()
{

	StartGame();
	return 0;

}
