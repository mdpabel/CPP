#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<int> v;
        int x, y, z;
        cin >> x >> y >> z;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);

        sort(v.begin(), v.end());

        if (v[1] != v[2])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << v[0] << " " << v[0] << " " << v[2] << endl;
        }
    }

    return 0;
}