#include <bits/stdc++.h>
using namespace std;

void lowerBound(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int lb = -1;

    // lower bound
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            lb = mid;
            end = mid - 1;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "lower bound : " << lb << endl;
}

void upperBound(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ub = -1;

    // lower bound
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            ub = mid;
            start = mid + 1;
        }

        if (arr[mid] < key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "upper bound : " << ub << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int key = 11;

    int arr[] = {10, 10, 11, 11, 11, 11, 11, 12, 14};
    int n = sizeof(arr) / sizeof(int);

    lowerBound(arr, n, key);
    upperBound(arr, n, key);

    return 0;
}