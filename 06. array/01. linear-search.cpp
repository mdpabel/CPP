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

    int key;
    cout << "which element you want to search : ";
    cin >> key;

    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " is found at " << i << endl;
            break;
        }
    }

    if (i == n)
    {
        cout << key << " is not presen";
    }

    return 0;
}
