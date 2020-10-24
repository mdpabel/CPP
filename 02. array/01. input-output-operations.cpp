#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "Input value :  ";
    cin >> n;

    while (n <= 0 || n >= 100)
    {
        cout << "Invalid number range, the valid range is 1 to 99 : " << endl;
        cout << "try again ";
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Input value for: " << i << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}