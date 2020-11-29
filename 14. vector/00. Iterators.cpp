#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // init
    vector<int> v;

    int n;
    cin >> n;

    // taking input from user
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    //Output of begin and end
    cout << "Output of begin and end" << endl;

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    // Output of rbegin and rend
    for (auto i = v.rbegin(); i < v.rend(); i++)
    {
        cout << *i << " ";
    }

    
    return 0;
}