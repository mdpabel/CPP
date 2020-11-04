#include <iostream>
#include <algorithm>

using namespace std;

// comparators

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[5] = {0};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // in built sorting function

    sort(arr, arr + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
