#include <iostream>
#include<cstdlib> //Trabaja con números random
using namespace std;

int validation(int a, int b);

int main()
{

    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 100) + 1;
    int guess;
    int tries = 0;

    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el número en el menor número de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {

        guess = validation(1, 100);

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

int validation(int a, int b) {
    int c;
    do {
        cout << "enter a guess (1-100)" << endl;
        cin >> c;
    } while (c > b or c < a);
    return c;
}