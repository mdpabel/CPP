#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int s;
        int d;
        cin >> s >> d;

        int count = 0;

        while (s > 0 || d > 0)
        {
            if (s < 0 || d < 0)
            {
            }
            if (s > d || s == d)
            {
                s = s - 2;
                d = d - 1;

                if (s < 0 || d < 0)
                {
                    break;
                }
                count++;
            }
            if (d > s)
            {
                s = s - 1;
                d = d - 2;
                if (s < 0 || d < 0)
                {
                    break;
                }
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}