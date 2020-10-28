#include <iostream>

using namespace std;

int main()
{
    int year{};
    cout << "Enter a year : ";
    cin >> year;

    (year % 400 == 0 || year % 4 == 0 || year % 100 == 1) ? cout << year << " is leap year" << endl : cout << year << " is not leap year" << endl;
}