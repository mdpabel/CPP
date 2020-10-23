#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}