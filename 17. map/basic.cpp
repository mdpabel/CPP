#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define endl '\n';

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> m1;

    // insert elements in random order
    m1.insert(pair<int, int>{1, 40});
    m1.insert(pair<int, int>{2, 20});
    m1.insert(pair<int, int>{3, 10});
    m1.insert(pair<int, int>{3, 20});
    m1.insert(pair<int, int>{2, 30});
    m1.insert(pair<int, int>{3, 20});
    m1.insert(pair<int, int>{4, 30});
    m1.insert(pair<int, int>{9, 10});
    m1.insert(pair<int, int>{5, 10});

    // print all map key and value
    cout << "M1 :-" << endl;
    for (auto u : m1)
    {
        cout << u.first << " " << u.second << endl;
    }

    // assigning the elements from m1 to m2

    map<int, int> m2(m1.begin(), m1.end());
    cout << "M2 :-" << endl;
    for (auto u : m2)
    {
        cout << u.first << " " << u.second << endl;
    }

    // remove all elements up to n
    m1.erase(m1.begin(), m1.find(5));

    // print all map key and value
    cout << "After remove all element up to 2 " << endl;
    for (auto u : m1)
    {
        cout << u.first << " " << u.second << endl;
    }

    // remove all elements with key = 9

    m1.erase(9);
    cout << "remove all elements with key = 9 " << endl;

    for (auto u : m1)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}
