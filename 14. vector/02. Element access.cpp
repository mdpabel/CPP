#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    cout << "ref operator : " << v[2] << endl;
    cout << "ref op at : " << v.at(2) << endl;
    // Returns a reference to the first element in the vector
    cout << v.front() << endl;
    cout << v.back() << endl;
    int *pos = v.data();

    cout << "\nThe first element is " << *pos;

    return 0;
}