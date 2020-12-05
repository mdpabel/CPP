#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<string> vn;
    vector<string> vm;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        vn.push_back(str);
    }

    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        vm.push_back(str);
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int year;
        cin >> year;
        --year;
        cout << vn[(year % n)] + vm[(year % m)] << endl;
    }

    return 0;
}