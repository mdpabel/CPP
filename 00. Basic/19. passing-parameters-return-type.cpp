#include <iostream>

using namespace std;

int totalPay(int h, double r)
{
    double total = h * r;
    if (total > 40)
    {
        total = total + (h - 40) * 2;
    }
    return total;
}

int main()
{

    int hours_worked;
    double hour_rate;

    hours_worked = 41;
    hour_rate = 10.00;

    double total = totalPay(hours_worked, hour_rate);
    cout << total << endl;

    return 0;
}
