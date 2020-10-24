#include <iostream>

using namespace std;

// void printArray(int *arr, int n)
void printArray(int arr[], int n)
{
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl; // arr[i] == *(arr + i)
    }
}

int main()
{
    int arr[3] = {10, 20, 30};
    printArray(arr, 3);
}