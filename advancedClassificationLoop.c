#include "NumClass.h"

int numOfDigits(int x)
{
    int help_num = x;
    int ans = 0;
    while (help_num > 0)
    {
        ans ++;
        help_num /= 10;
    }
    return ans;
}


int power(int x, int n)
{
    int result = 1;
    while (n > 0) {
        if (n % 2 != 0) // y is odd
        {
            result = result * x;
        }
        x = x * x;
        n /= 2; // y=y/2;
    }
    return result;
}

int isArmstrong (int x)
{
    int sum = 0;
    int help_num = x;
    int digit;
    int num_of_digits = numOfDigits(x);

    for (int i = 0; i < num_of_digits; i++)
    {
        digit = (help_num % 10);
        help_num /= 10;
        sum = power((digit), (num_of_digits));
    }

    if (sum == x)
        return TRUE;
    return FALSE;

}

int isPalindrome(int x)
{
    int reversed_number = 0;
    int help_num = x;
    while (help_num > 0)
    {
        reversed_number = reversed_number * 10 + help_num % 10; 
        help_num /= 10; 
    }
    if (reversed_number == x)
        return TRUE;
    
    return FALSE;
}