#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int key = 19;
    int arr[] = {10, 11, 12, 13, 15, 17, 18, 19, 20};
    int n = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            cout << "got the key at index : " << mid;
            return 0;
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
    cout << "Not found ";

    return 0;
}