/***
 * int / int = int
 * int / double = double
 * long / double = long
 * double / flout = double
**/

#include <iostream>

using namespace std;

int main()
{
    int a{10};
    int b{20};
    double result;
    result = (double)a / b;
    cout << "result = " << result << endl;
    return 0;
}