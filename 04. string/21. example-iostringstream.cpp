#include <iostream>
#include <sstream>
#include <string>
using namespace std;

double getAvg(string str)
{
    // --- Please read problem statement for the details description
    // Auto Tester will call this method and will pass str, str will contain many integer numbers separated by #, like
    // 10#40#90#2#56
    // the first and last token in str will always be integer and the delimeter is also always #, your task is to
    // extract each integer from str and find the average and return the average to the tester using return at the end.
    // You will use istringstrem object and will extract each element from str.
    // --- WRITE YOUR CODE BELOW AND PLEASE DO NOT CHANGE ANYTHING ABOVE THIS LINE ----
    istringstream iss(str);
    int k;
    double sum = 0, count = 0;
    while (iss >> k)
    {
        sum = sum + k;
        count++;

        if (iss.peek() == '#')
        {
            iss.ignore();
        }
    }
    double average = sum / count;

    return average;

    // DO NOT FORGET TO RETURN THE AVERAGE (A DOUBLE VALUE) TO THE CALLER.
}

int main()
{
    string str = "10#40#90#2#56";
    double avg = getAvg(str);
    cout << avg << endl;
    return 0;
}