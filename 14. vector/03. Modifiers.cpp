#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    vector<int> v2 = {20, 34, 56};

    // fill the array with 10 five times
    v.assign(5, 10);

    // inserts 15 to the last position
    v.push_back(15);

    // removes last element
    v.pop_back();

    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
    // v.emplace(v.begin(), 5);

    // removes the first element
    v.erase(v.begin());

    // erases the vector
    // v.clear();

    v.swap(v2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}