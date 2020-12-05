#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define endl '\n';

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Syntax :

    pair<int, string> p1;

    p1.first = 10;
    p1.second = "ten";

    cout << p1.first << endl;
    cout << p1.second << endl;

    pair<int, string> p2;

    p2.first = 10;
    p2.second = "ten";

    cout << p2.first << endl;
    cout << p2.second << endl;

    cout << (p1 == p2) << endl;
    cout << (p1 > p2) << endl;
    cout << (p1 < p2) << endl;
    cout << (p1 != p2) << endl;

    return 0;
}
