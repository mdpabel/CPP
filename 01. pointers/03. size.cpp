#include <iostream>

using namespace std;

int main()
{
    int *p;
    cout << "Size of p : " << sizeof(p) << endl;
    cout << "Size of *p : " << sizeof(*p) << endl;

    char *c;
    cout << "Size of c : " << sizeof(c) << endl;
    cout << "Size of *c : " << sizeof(*c) << endl;

    double *d;
    cout << "Size of d : " << sizeof(d) << endl;
    cout << "Size of *d : " << sizeof(*d) << endl;

    return 0;
}