#include <iostream>

using namespace std;

int main()
{
    int p = 300, c = 500;

    cout << "location of p : " << (unsigned)&p << endl;
    cout << "location of p : " << (unsigned)&c << endl;

    int *pointerOfP = &p;
    pointerOfP = pointerOfP - 1;
    cout << "location of pointerOfP : " << (unsigned)pointerOfP << endl;
    cout << "content of pointerOfP : " << *pointerOfP << endl;

    char *k;
    k = (char *)pointerOfP;

    cout << "c " << (unsigned)&k << endl;
    cout << "*c " << *k << endl;
}

/**
 * location p
 * content *p
 **/