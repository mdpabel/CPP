/**
 * 'A' = 65
 * 'B' = 66
 * 'C' = 67
 * .
 * .
 * .
 *  
 * 'a' = 97
 * 'b' = 98
 * .
 * .
 * .
 **/

#include <iostream>

using namespace std;

int main()
{
    char ch = 'a';
    cout << ch << " = " << (int)ch << endl;
    char test = ch - 32;
    cout << test << " = " << (int)test << endl;
    char test2 = 32 + 'A';
    cout << test2;
    return 0;
}