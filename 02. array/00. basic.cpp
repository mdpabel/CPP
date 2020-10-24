#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    // int arr[] = {10, 20, 30};

    arr[0] = 10;
    arr[1] = 20;
    arr[4] = arr[1] + arr[0];

    cout << arr[4] << endl;

    return 0;
}