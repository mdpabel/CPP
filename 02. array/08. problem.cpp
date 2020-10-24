#include <iostream>

/**
 * Array arr[] will contain n number of integers in the range 0 - 99
 * You need to count the numbers in the specified ranges and put the result in the cpunter array
 * See the Problem statement above for details.
 * 
 */
void countValuesInRange(int arr[], int n, int counter[])
{
    // Do not forget to initialize each element of counter array,
    // You will need to iterate the arr array and count the elements and update specific element of the counter array
    // auto-tester will call this function with various values in arr array, auto tester will create counter array as well,
    // please note that n is the number of elements in arr array, the counter array will always have 10 elements.
    // ----WRITE YOUR CODE AFTER THIS LINE, DO NOT CHANGE ANYTHING ABOVE ----

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 10)
        {
            counter[0]++;
        }
        else if (arr[i] < 20)
        {
            counter[1]++;
        }
        else if (arr[i] < 30)
        {
            counter[2]++;
        }
        else if (arr[i] < 40)
        {
            counter[3]++;
        }
        else if (arr[i] < 50)
        {
            counter[4]++;
        }
        else if (arr[i] < 60)
        {
            counter[5]++;
        }
        else if (arr[i] < 70)
        {
            counter[6]++;
        }
        else if (arr[i] < 80)
        {
            counter[7]++;
        }
        else if (arr[i] < 90)
        {
            counter[8]++;
        }
        else if (arr[i] < 100)
        {
            counter[9]++;
        }
    }
}
