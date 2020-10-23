#include <iostream>

using namespace std;

int main()
{
    int x{10};
    int r;
    // logical AND
    r = x > 15 && x < 19;
    cout << r << endl;
    // logical OR
    r = x > 15 || x < 19;
    cout << r << endl;

    // logical NOT
    r = !(x > 15 && x < 19);
    cout << r << endl;
    return 0;
}