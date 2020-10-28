#include <iostream>

using namespace std;

int main()
{
    int x{10};
    int p;

    p = x++;
    cout << "p1 : " << p << endl;
    p = ++x;
    cout << "p1 : " << p << endl;

    p = x--;
    cout << "p1 : " << p << endl;

    p = --x;
    cout << "p1 : " << p << endl;

    return 0;
}