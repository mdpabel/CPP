#include <iostream>

using namespace std;

int main()
{
    int num{};
    cout << "Enter an integer number : ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "The number is : " << num << endl;
        break;
    case 2:
        cout << "The number is : " << num << endl;
        break;
    case 3:
        cout << "The number is : " << num << endl;
        break;

    default:
        cout << "Invalid number" << endl;
        break;
    }
    return 0;
}