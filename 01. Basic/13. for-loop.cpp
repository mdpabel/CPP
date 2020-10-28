#include <iostream>

using namespace std;

int main()
{
    int num{}, fact = 1;
    cout << "Enter an integer number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << fact;
    return 0;
}