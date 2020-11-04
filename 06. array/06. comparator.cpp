#include <iostream>
#include <algorithm>

using namespace std;

// compartor function
bool compare(int a, int b)
{
    return a < b;
}

// selection sort
void selection_sort(int arr[], int n, bool (&cmp)(int a, int b))
{
    for (int i = 0; i < n - 1; i++)
    {
        int init_index = i;
        for (int j = i; j < n; j++)
        {
            if (cmp(arr[i], arr[j]))
            {
                init_index = j;
            }
        }
        swap(arr[init_index], arr[i]);
    }
}

int main()
{
    int arr[5] = {0};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // function call
    selection_sort(arr, n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
