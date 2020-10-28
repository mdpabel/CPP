#include <iostream>
#include <string>
using namespace std;

void createString(unsigned n, char ch)
{
    // The function fun receives unsigned integer n and a character in ch.
    // Using following instruction write the appropriate code

    // Instruction 1: You will create a string with n numbers of ch characters and you will print that string to console
    // using cout. There must be a newline at the end;
    // Example: if n = 20 and ch = '$', then you must create a string with 20 '$' signs, that  is your
    // string should contain "$$$$$$$$$$$$$$$$$$$$". Please note that, tester will pass different characters in ch and
    // different values for n. You need to use an appropriate  constructor of string in this case, look into
    // the last lecture if you have doubt. There must be a newline at the end after you print the string.
    // Write your code below.

    string str(n, ch);
    cout << n << endl;
}

int main()
{
    createString(20, '$');
    return 0;
}