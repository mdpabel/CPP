#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {10, 3, 5, 6, 2};
    int n = sizeof(arr) / sizeof(int);

    int prod[n];

    for (int i = 0; i < n; i++)
    {
        int temp = 1;
        for (int j = 0; j < n; j++)
        {
            temp *= arr[j];
        }
        prod[i] = temp / arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << prod[i] << " ";
    }

    return 0;
}

/**
 * arr[] = {10, 3, 5, 6, 2}
*  prod[] = {180, 600, 360, 300, 900}
*/