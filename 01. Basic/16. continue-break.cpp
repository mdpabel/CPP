#include <iostream>

using namespace std;

int main()
{
    int n{10};

    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0)
            continue;
        if (i == 8)
            break;
        cout << i << endl;
    }
}