#include <iostream>

using namespace std;

// void readLine(char arr[], int len)
// {
//     int i = 0;
//     char ch = cin.get();

//     while (ch != '\n')
//     {
//         arr[i] = ch;
//         i++;
//         if (i == (len - 1))
//         {
//             break;
//         }

//         ch = cin.get();
//     }
//     arr[i] = '\0';
//     return;
// }

int main()
{
    char arr[1000];
    // cin >> arr;

    // readLine(arr, 1000);
    cin.getline(arr, 1000, '&');

    cout << arr << endl;

    return 0;
}
