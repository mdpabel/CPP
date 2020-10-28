#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Cat";
    string str2 = "Tiger";

    // int comapared = str1.compare(str2);
    // int compared = str2.compare(str1);
    int compared = str2.compare(str2);
    cout << compared << endl;
    // if (str1 < str2)
    // {
    //     cout << str1 << endl;
    // }
    // else
    // {
    //     cout << str2 << endl;
    // }
    return 0;
}