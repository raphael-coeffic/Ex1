#include "NumClass.h"

//give us the num of digits of a number
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


int power(int x, int n) {
    int ans = 1;  // Initialize the result to 1

    while (n > 0) {
        // Check if the current exponent is odd
        if (n % 2 != 0) {
            ans = ans * x;  // If odd, multiply result by base
        }

        x = x * x;  // Square the base for the next iteration
        n /= 2;     // Divide the exponent by 2 
    }

    return ans;  // Return the answer
}

int isArmstrong (int x)
{
    int sum = 0;
    int help_num = x;
    int digit;
    int num_of_digits = numOfDigits(x);

    // calculate the sum of each digit power the num of digits og the number
    for (int i = 0; i < num_of_digits; i++)
    {
        // next digit
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

    // reverse the number
    while (help_num > 0)
    {
        reversed_number = reversed_number * 10 + help_num % 10; 
        help_num /= 10; 
    }
    if (reversed_number == x)
        return TRUE;
    
    return FALSE;
}
