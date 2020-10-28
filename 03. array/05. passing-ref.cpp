#include <iostream>

using namespace std;

void arrIterate(int (&arr)[6])
{
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 8};
    arrIterate(arr);
    return 0;
}