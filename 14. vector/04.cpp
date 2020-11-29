#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {10, 12, 3, 14, 51, 6, 7, 7, 12, 12, 10, 10, 4, 3, 3, 3, 3};

    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>());
    // sort(v.rbegin(), v.rend());
    // reverse(v.begin(), v.end());
    // v.erase(v.begin(), v.begin() + 4);
    // v.erase(v.begin(), v.end() - 2);

    // vector<int>::iterator it;/

    // int it = unique(v.begin(), v.end()) - v.begin();
    // // v.resize(distance(v.begin(), it));

    // for (int i = 0; i < it; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int>::iterator it = max_element(v.begin(), v.end());
    // int n = max_element(v.begin(), v.end()) - v.begin();

    // cout << n << endl;

    vector<int>::iterator it = min_element(v.begin(), v.end());
    int n = min_element(v.begin(), v.end()) - v.begin();
    cout << *it << endl;
    cout << n << endl;

    return 0;
}