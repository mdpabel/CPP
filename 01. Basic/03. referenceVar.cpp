#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int &v = x; // reference start with &nameOfVar
    v = v + 1;
    cout << "v : " << v << endl;
    return 0;
}