#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[10] = {0};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > largest)
        // {
        //     largest = arr[i];
        // }

        // if (arr[i] < smallest)
        // {
        //     smallest = arr[i];
        // }
        largest = max(largest, arr[i]);
        smallest = min(smallest, arr[i]);
    }

    cout << "Largest " << largest << endl;
    cout << "Smallest " << smallest << endl;

    return 0;
}
