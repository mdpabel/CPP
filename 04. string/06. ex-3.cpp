#include <iostream>
using namespace std;

void printReverse(string str)
{
    // Instruction : The auto-tester will pass a string to the parameter str, your task is to
    // print the string in reverse order with once character at a time and after each character there should be a comma.
    // There must be a newline at the end.
    // Example:  if the string str contains "eaSt or WEst C++ is Best", then your program should print the following:
    //  t,s,e,B, ,s,i, ,+,+,C, ,t,s,E,W, ,r,o, ,t,S,a,e,
    // and there is a newline at the end. Write your code after this line:

    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i] << ",";
    }

    cout << endl;
}

int main()
{
    string str = "eaSt or WEst C++ is Best";
    printReverse(str);
    return 0;
}