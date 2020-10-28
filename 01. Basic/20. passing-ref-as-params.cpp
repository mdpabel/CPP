#include <iostream>

using namespace std;

void incDec(int &a, int &b)
{
    a = a + 10;
    b = b - 10;
}

int main()
{
    int a{10}, b{30};
    cout << "a = " << a << ", b = " << b << endl;
    incDec(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
