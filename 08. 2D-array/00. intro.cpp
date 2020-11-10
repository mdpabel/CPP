#include <iostream>

using namespace std;

int main()
{
    int arr[5][6];

    int val = 0;
    for (int i = 0; i < 5; i++) // rows
    {
        val += 1;
        for (int j = 0; j < 6; j++) // cols
        {
            arr[i][j] = val;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}