#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a > b;
    }
    return a.length() > b.length();
}

int main()
{
    int n;
    cin >> n;
    string str[n];
    cin.get();
    for (size_t i = 0; i < n; i++)
    {
        getline(cin, str[i]);
    }

    sort(str, str + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << str[i] << "-" << i << endl;
    }
}
