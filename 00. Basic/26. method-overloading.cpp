#include <iostream>

using namespace std;

int sum(int a, int b)
{
    cout << "2 int" << endl;
    return a + b;
}

int sum(double a, double b)
{
    cout << "2 double" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "3 int" << endl;
    return a + b + c;
}

int main()
{
    unsigned s1 = sum(2, 3, 4);
    unsigned s2 = sum(2, 3);
    unsigned s3 = sum(2.0, 2.3);

    cout << "s1 " << s1 << " s2 " << s2 << " s3 " << s3 << endl;
    return 0;
}