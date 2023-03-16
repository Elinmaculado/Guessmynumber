#include <iostream>
#include<cstdlib> //Trabaja con números random
using namespace std;

int main()
{

    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 300) + 1;
    int guess;
    int tries = 0;
    int veryclose;

    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el número en el menor número de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {
        cout << "\nEnter a guess (1-300):" << endl;
        cin >> guess;
        tries++;

        veryclose = secretNumber - guess;

        if (veryclose < 5 && veryclose > -5 && veryclose != 0) {
            cout << "estas muy cerca" << endl;
        }

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