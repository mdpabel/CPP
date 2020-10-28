#include <iostream>

using namespace std;

int main()
{
    int temp = 360;
    cout << "Address of variable temp: " << (unsigned)&temp << endl;

    int *p = &temp;
    cout << " *p " << *p << endl;
    cout << " temp " << temp << endl;

    *p = *p - 60;
    cout << " *p " << *p << endl;
    cout << " temp " << temp << endl;

    return 0;
}