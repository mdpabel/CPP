#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b)
{
    return a <= b;
}

int main()
{
    int tks[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};

    int n = sizeof(tks) / sizeof(int);
    int taka = 68;

    auto lb = lower_bound(tks, tks + n, taka, compare) - tks - 1;
    while (taka > 0)
    {
        auto lb = lower_bound(tks, tks + n, taka, compare) - tks - 1;

        cout << tks[lb] << ' ';

        taka = taka - tks[lb];
    }

    return 0;
}