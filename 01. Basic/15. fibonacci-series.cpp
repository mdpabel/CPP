#include <iostream>

using namespace std;

int main()
{
    int n1, n2, sum, i, n;

    cout << "Enter a number : ";
    cin >> n;

    for (n1 = -1, n2 = 1, i = 0; i < n; i++)
    {
        sum = n1 + n2;
        cout << sum << " ";
        n1 = n2;
        n2 = sum;
    }

    return 0;
}