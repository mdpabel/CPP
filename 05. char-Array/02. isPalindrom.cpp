#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrom(char a[])
{
    int i = 0;
    int j = strlen(a) - 1;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char arr[1000];

    cin.getline(arr, 1000);

    cout << arr << endl;

    if (isPalindrom(arr))
    {
        cout << "the string is Palindrom string";
    }
    else
    {
        cout << "the string is not Palindrom string";
    }

    return 0;
}
