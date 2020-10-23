#include <iostream>
#include <cmath>

using namespace std;

unsigned factorial(unsigned n)
{
    unsigned fact = 1;
    for (unsigned i = n; i >= 1; i--)
    {
        fact *= i;
    }

    // notice the use of post decrement -- operator in the modifier section
    // I have terminated that for loop with that semi colon
    return fact;
}
// -- Please read the problem statement --
// The name of the function must be series_sum and it must receive the parameters as described in the problem statement
// ------------ WRITE YOUR CODE AFTER THIS LINE ---------------------
int series_sum(double x, unsigned n, double &sum)
{

    for (int i = 0; i <= n; i++)
    {
        sum += pow(x, i) / factorial(i);
    }
    return sum;
}

int main()
{
    double sum;
    series_sum(2.0, 2, sum);
    cout << sum << endl;
    return 0;
}
