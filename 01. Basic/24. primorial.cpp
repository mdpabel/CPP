#include <iostream>
#include <cmath>

using namespace std;
// the following function will test if a supplied unsigned integer is
// prime or not, if prime this function will return 1, otherwise will return 0
// I have explained this function in the video tutorial.
// You just need to use this function in order to find Primorial,
// YOU WILL NEVER CHANGE IN THIS FUNCTION
unsigned
isPrime(unsigned aNum)
{
    //  considering aNum as prime initially
    unsigned prime = 1;

    // Now, let us check if there exists a factor other than 1 and aNum for aNum
    // we are going to search for the factors of aNum in the domain >=2 to  <= sqrt(aNum) and as long as aNum is prime
    for (unsigned i = 2; i <= (unsigned)sqrt(aNum) && prime; ++i)
    {
        if (aNum % i == 0)
        {
            // got a factor, aNum is not a prime number
            prime = 0;
            // since we are assigning 0 to prime, the condition in the for loop will become false
            // in the next checking and the loop will terminate
        }
    }
    // here we will return the content of prime, which is either 1 or 0
    return prime;
}

// ---------------- NO CHANGES ABOVE THIS LINE -----------------------------//
// Instruction: Write a function with name primorial (no other name please as the auto-tester will test this name primorial)
// that must receive an unsigned integer as parameter and will find the Primorial or p-prime factor and will return that
// using return statement, you can obviously (and will need to) use the isPrime function that I have written above.
// Look into the "Problem statement" section above to get the definition of Primorial.
// Write your primorial function below.

int primorial(unsigned n)
{
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            product *= i;
        }
    }
    return product;
}

int main()
{
    int p = primorial(3);
    cout << p << endl;
}