#include <bits/stdc++.h>
// Capacity
using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    cout << v.size() << endl;
    v.resize(5);
    cout << "after resizing " << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;

    if (v.empty())
    {
        cout << "v is empty" << endl;
    }
    else
    {
        cout << "v is not empty" << endl;
    }

    for (auto item : v)
    {
        cout << item << " ";
    }

    return 0;
}