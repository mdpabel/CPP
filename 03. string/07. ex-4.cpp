#include <iostream>
#include <string>

using namespace std;

/**
 * First complete this function. isVowel will receive a character and will test if the
 * character is a vowel or not, if ch is a vowel then this function will return true 
 * for all other characters it will return false.
 * Please note that, this function will be capable of testing both upper case and lower case letter.
 * Exaple: 
 * For isVowel('p'), will return false
 * For isVowel('A') will return true
 * for isVowel('i') will return true
 * for isVowel('#') will return false
 * for isVowel('a') will return true
 */

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
// do not forget to return either true or false depending on your finding in the above function.

// After completing the above try the following.
// Instruction: The auto tester will pass a string in str, your task is to write code to count number of vowels in
// the string str. PLEASE NOTE THAT THERE CAN BE UPPER CASE AND LOWER CASE LETTERS in the string.
// You will use the isVowel function that you will write to test whether a character is vowel or not.
// After finding the count you will return the count to the caller(auto-tester) using return keyword.

int countVowels(string str)
{
    // Write your code after this line
    int count = 0;
    for (char &st : str)
    {
        if (isVowel(st))
        {
            count++;
        }
    }
    return count;
}
// do not forget to return the count using return key word

int main()
{
    string str = "AmiholoAa";
    int r = countVowels(str);
    cout << r << endl;
    return 0;
}