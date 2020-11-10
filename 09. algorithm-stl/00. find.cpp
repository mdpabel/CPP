#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {10, 3, 4, 2, 50, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    int key = 4;

    auto idx = find(arr, arr + n, key);
    int index = idx - arr;

    if (index == n)
    {
        cout << key << " is not present " << endl;
    }
    else
    {
        cout << key << " is present at " << index << endl;
    }

    return 0;
}