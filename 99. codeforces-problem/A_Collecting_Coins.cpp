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

        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int sum = a + b + c;
        int m = max(a, max(b, c));
        int r = (m * 3) - sum;
        n = n - r;

        if (n < 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (n % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}