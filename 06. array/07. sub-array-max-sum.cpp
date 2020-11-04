#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         for (int k = i; k <= j; k++)
    //         {
    //             cout << arr[k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    int currentSum = 0;
    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentSum = 0;
            for (int k = i; k <= j; k++)
            {
                currentSum += arr[k];
            }
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
            }
        }
    }

    cout << maxSum;

    return 0;
}
