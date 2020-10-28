#include <iostream>

using namespace std;

int main()
{
    int num{}, sum = 0;
    cout << "Enter a number & '0' to terminate : ";
    cin >> num;
    while (num != 0)
    {
        sum += num;
        cout << "Enter another number & '0' to terminate : ";
        cin >> num;
    }
    cout << "sum : " << sum << endl;

    return 0;
}