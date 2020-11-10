#include <iostream>

using namespace std;

int main()
{
    int arr[100][100];
    int n, m;
    cin >> n >> m;
    int val = 0;

    cout << "*****INPUT*****" << endl;
    for (int i = 0; i < n; i++) // rows
    {
        for (int j = 0; j < m; j++) // cols
        {
            val += 1;
            arr[i][j] = val;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "*****OUTPUT*****" << endl;

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }

    return 0;
}