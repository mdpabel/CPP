#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }

    cout << "NO" << endl;

    bool isFalse = false;

    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[i] == v[j])
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                isFalse = true;
            }
        }
        if (isFalse)
        {
            cout << "NO";
        }
    }

    return 0;
}