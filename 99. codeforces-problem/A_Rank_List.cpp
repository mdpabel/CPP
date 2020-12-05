#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define endl '\n';

vector<int> res;

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    //pa > pb, or pa = pb and ta < tb.
    if (p1.first > p2.first)
        return 1;
    if (p1.first == p2.first && p1.second < p2.second)
        return (p1.second < p2.second);
    return 0;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), cmp);

    int count = 0;

    for (auto u : v)
    {
        if ((u.first == v[k - 1].first) && (u.second = v[k - 1].second))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
