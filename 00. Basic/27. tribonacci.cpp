// Please read the Problem Statement
// The function will be called by auto-tester
// Consider first term = 0, second term = 1 and third term = 1
// Complete the code

bool isTribonacci(unsigned n)
{
    // let us take a bool type match, initially we consider that n is not a tribonacci
    bool match = false;

    // we need 4 unsigned integers
    unsigned first = 0,
             second = 1,
             third = 1,
             next;
    // first 3 terms are trivial
    if (first == n || second == n || third == n)
    {
        match = true;
    }

    // we need to iterate indefinitely, as we just do not know how many iterations
    // it will take to find a match or to cross the Tribonacci number that is just less than n
    while (!match)
    {
        // **** YOUR TASK:  WRITE YOUR CODE HERE TO COMPLETE THIS FUNCTION  ***
        next = first + second + third;
        first = second;
        second = third;
        third = next;
        if (next == n)
        {
            match = true;
        }
        else if (next > n)
        {
            match = false;
            break;
        }
    }
    // return match
    return match;
}
