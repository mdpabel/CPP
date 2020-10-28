#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h>

using namespace std;

int main()
{
    int num{}, randNum{};
    cout << "Enter your number between 1 to 5 : ";
    cin >> num;

    srand(time(NULL));
    randNum = rand() % 5 + 1;
    cout << "Winning number is : " << randNum << endl;
    if (num == randNum)
    {
        cout << "Congratulations! your number was : " << num << endl;
    }
    else
    {
        cout << "Sorry! your number was : " << num << endl;
    }

    return 0;
}