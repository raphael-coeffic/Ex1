#include "NumClass.h"

int isPrime (int x)
{
    if (x < 1) 
        return FALSE;
    // Even numbers
    if (x != 2 && x % 2 == 0)
        return FALSE;
    // check if we can divide the number by an odd number
    for (int i = 3; i < x; i = i + 2)
    {
        if (x % i == 0)
            return FALSE;
    }

    return TRUE;

}

// This function give us the factorial of a number (Ex: 3! = 6)
int factor (int x)
{
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans *= i;
    }
    return ans;
    
}


int isStrong (int x)
{
    int sum = 0;
    int help_num = x;
    int digit;
    int factorial;

    while (help_num > 0)
    {
        // take the next digit
        digit = help_num % 10;
        // digit!
        factorial = factor (digit);
        help_num /= 10;
        // add to the sum of the factorials of the digits
        sum += factorial;
    }

    if (sum == x)
        return TRUE;

    return FALSE;
    
}
