#include <iostream>

using namespace std;

void arrIterate(int (&arr)[6])
{

    for (int k : arr)
    {
        cout << k << " ";
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 8};

    for (int &x : arr)
    {
        x *= 2;
    }

    arrIterate(arr);
    return 0;
}