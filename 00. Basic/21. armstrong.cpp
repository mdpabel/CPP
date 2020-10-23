#include <iostream>
#include <cmath>

using namespace std;

int nDigits(int n)
{
    int count{};
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int isArmstrong(int n)
{
    int count = nDigits(n);

    int sum = 0;
    int temp = n;

    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        sum += pow(r, count);
    }
    return temp == sum;
}

int main()
{
    for (int i = 0; i < 1000; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << endl;
        }
    }
}
