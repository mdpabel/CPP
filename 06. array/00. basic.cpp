#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {0};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arr[8] = 100;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
