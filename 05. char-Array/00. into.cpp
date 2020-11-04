#include <iostream>

using namespace std;

int main()
{
    // char s[10] = {'A', 'B', 'C'};
    // cout << s << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << s[i] << " , ";
    // }

    // char s1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // char s2[] = "hello";

    // cout << s1 << " " << sizeof s1 << endl;
    // cout << s2 << " " << sizeof s2 << endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << s1[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << s2[i] << " ";
    // }

    // cout << s1 << endl;
    // cout << s2 << endl;

    char s1[10];
    cin >> s1;

    for (int i = 0; i < 4; i++)
    {
        cout << s1[i] << ",";
    }

    return 0;
}
