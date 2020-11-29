#include <bits/stdc++.h>

using namespace std;
using ll = long long;

char flip(char c)
{
    if (c == '0')
    {
        return '1';
    }
    else
    {
        return '0';
    }
}

void printOneTwoS(string bin)
{
    string oneS = "";
    string twoS = "";

    int i;
    for (i = 0; i < bin.length(); i++)
    {
        oneS += flip(bin[i]);
    }
    twoS = oneS;

    for (i = bin.length() - 1; i >= 0; i--)
    {
        if (oneS[i] == '0')
        {
            twoS[i] = '1';
            break;
        }
        else
        {
            twoS[i] = '0';
        }
    }

    if (i == -1)
    {
        twoS = '1' + twoS;
    }

    cout << oneS << endl;
    cout << twoS << endl;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string bin = "1100";
    printOneTwoS(bin);

    return 0;
}