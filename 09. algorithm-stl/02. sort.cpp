#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[] = {40, 50, 60, 10, 80, 20, 30, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}