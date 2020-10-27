#include <iostream>

using namespace std;

int main()
{

    int row = 100, col = 100;
    int arr[row][col];
    int nrow, ncol;

    cout << "How many rows : ";
    cin >> nrow;

    while (nrow < 0 || nrow > row)
    {
        cout << "Invalid input : " << endl;
        cout << "Input again for row : ";
        cin >> nrow;
    }

    cout << "How many col : ";
    cin >> ncol;

    while (ncol < 0 || ncol > col)
    {
        cout << "Invalid input : " << endl;
        cout << "Input again for col : ";
        cin >> ncol;
    }

    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << "row index : " << i << ", col index : " << j << ": ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}