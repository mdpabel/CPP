#include <iostream>
#include <cstring>

using namespace std;

void isPalindrom(char a[])
{
    int len = strlen(a);
    int j = 0;
    for (int i = 1; i < len; i++)
    {
        if (a[j] != a[i])
        {
            j++;
            a[j] = a[i];
        }
    }
    a[j + 1] = '\0';
    return;
}

int main()
{
    char ch[1000];
    cin >> ch;

    isPalindrom(ch);

    cout << ch << endl;

    return 0;
}

// ccooodiiing = coding