// PLEASE DO NOT CHANGE IN THE WRITTEN CODE
#include <iostream>

double getAverage(int arr[], int n)
{
    // Instruction 1: Write code to find the average of array arr passed as parameter, n is the total number of elememts in
    // the array. You will need to return the average found using the return keyword at the end.

    // Suggestion, be careful while finding the average, it must be a real number and you must use double.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    double average = sum / n;
    return average;
}

int countAboveAverage(int arr[], int n)
{
    // Instruction 2: First find the average of elements in the array arr passed as parameter. n is the total number
    // of elements in the array arr, you will make a call to getAverage function for this purpose.
    double average = getAverage(arr, n);

    // Instruction 3: Now that you have the average, now count how many elements of the array arr are actually above (greater than) the
    // average.
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > average)
        {
            count++;
        }
    }

    // Instruction 4: return  the count to the caller using return statement.
    return count;
}