#include <iostream>
using namespace std;

int main()
{
    int secret, guess;
    cout << "Set the sec number: ";
    cin >> secret;

    do
    {
        cout << "Guess  number: ";
        cin >> guess;
        if (guess > secret)
            cout << "Too High!\n";
        else if (guess < secret)
            cout << "Too Low!\n";

    } while (guess != secret);
    cout << "Correct! You guessed the number.";

    return 0;
}