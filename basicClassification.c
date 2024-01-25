#include "NumClass.h"

int isPrime (int x)
{
    if (x < 1) 
        return FALSE;

    if (x != 2 && x % 2 == 0)
        return FALSE;

    for (int i = 3; i < x; i = i + 2)
    {
        if (x % i == 0)
            return FALSE;
    }

    return TRUE;

}

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
        digit = help_num % 10;
        factorial = factor (digit);
        help_num /= 10;
        sum += factorial;
    }

    if (sum == x)
        return TRUE;

    return FALSE;
    
}