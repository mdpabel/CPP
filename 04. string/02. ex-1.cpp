#include <iostream>
using namespace std;

char getSecondLast(string str)
{
    // Instruction: The auto tester will call this method and will pass a string in parameter str, your task is
    // just to return the second last character of the string str.
    // For example:  if str contains "abcxya", then your function should return y as that is the second last character.
    // write your code below.

    return str[str.length() - 2];
}