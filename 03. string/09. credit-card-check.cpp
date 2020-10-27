// PLEASE FIRST READ THE PROBLEM STATEMENT ABOVE AND THEN TRY THIS CODE.

#include <iostream>
#include <string>

using namespace std;

bool isValidCreditCard(string cc_number)
{
    // Instruction 1
    // first check if the length of the parameter is 16 or not. If not, return false
    if (cc_number.length() != 16)
    {
        return false;
    }

    // Instruction 2
    // Now that you get 16 characters string, declare an array of integers with size 16 digits
    // and get each of the characters from the string into the corresponding element of the
    // array Follow the logic and hints I gave there  in the problem statement for this
    // conversion you will need to subtract the ASCII of '0' to get each digit properly into
    // the array as integer. You will do this in a loop.
    int arr[16] = {};
    for (int i = 0; i < cc_number.length(); i++)
    {
        arr[i] = (int)(cc_number.at(i) - '0');
    }

    // Instruction 3:  Now here you need to do the processing as described in the step 1,2,3
    // in the problem statement. You will need a loop and inside of loop you will do this.

    for (int i = 14; i >= 0; i -= 2)
    {

        arr[i] *= 2;

        if (arr[i] >= 10)
        {
            arr[i] = arr[i] / 10 + arr[i] % 10;
        }
    }

    for (int i = 0; i < 16; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }

    // Instruction 4: Find the sum of each of the elements in the array, you will do this in a
    // loop.
    int sum = 0;
    for (int i = 0; i < 16; i++)
    {
        sum += arr[i];
    }
    cout << "Sum " << sum << endl;
    // Instruction 5:
    // if the sum is divisible by 10, then return true otherwise return false.
    return sum % 10 == 0;
}

int main()
{
    string cardNo = "6666777788889999";
    if (isValidCreditCard(cardNo))
        printf("This is a valid card");
    else
        printf("This is not a valid card");
    return 0;
}