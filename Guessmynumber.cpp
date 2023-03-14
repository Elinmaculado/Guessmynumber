#include <iostream>
#include<cstdlib> //Trabaja con n�meros random
using namespace std;

int main()
{

    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 300) + 1;
    int guess;
    int tries = 0;

    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el n�mero en el menor n�mero de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {
        cout << "\nEnter a guess (1-300):" << endl;
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Muy Alto\n\n";
        }
        else if (guess < secretNumber) {
            cout << "Muy Bajo\n\n";
        }
        else {
            cout << "Excelente lo hiciste en -- " << tries << "-- intentos";

        }
    } while (guess != secretNumber);
}