#include "NumClass.h"

// This function execute power
int power(int x, int y)
{
    if (y == 0)
        return 1;
    int help_num = power(x, y / 2);
    if (y % 2 == 0)
        return help_num * help_num;
    else
        return x * help_num * help_num;

}

// check the num of digits of a number
int numOfDigits(int x)
{
    if (x <= 0)
        return 0;
    else
        return (1 + (numOfDigits((x / 10))));
    
}

// give us the sum of each digit power the num of digit
int helpForArmstrong(int num, int num_of_digits, int actual_sum) 
{
    if (num <= 0)
        return actual_sum;

    int digit = num % 10;
    num /= 10;
    actual_sum += power(digit, num_of_digits);

    return helpForArmstrong(num, num_of_digits, actual_sum);
}


int isArmstrong(int x)
{
    int num_of_digits = numOfDigits(x);
    int sum = helpForArmstrong(x, num_of_digits, 0);

    if (sum == x)
        return TRUE;
    
    return FALSE;
}

// give us the reversed number
int inverseNum(int x, int actual_inversed)
{
    if (x <= 0)
        return actual_inversed;
    
    int digit = x % 10;
    actual_inversed = (actual_inversed * 10) + (digit);
    x /= 10;
    actual_inversed = inverseNum(x, actual_inversed);
    return actual_inversed;
    
}

int isPalindrome(int x)
{
    int actual_inversed = 0;
    int inversed = inverseNum(x, actual_inversed);

    if (inversed == x)
        return TRUE;

    return FALSE;
}
