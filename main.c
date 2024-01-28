#include <stdio.h>
#include "NumClass.h"

int main()
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    // Print all the Armstong numbers
    printf("The Armstrong numbers are:");
    for (int i = a; i <= b; i++)
    {
        if (isArmstrong(i))
            printf(" %d", i);
    }

    // Print all the palindromes
    printf("\nThe Palindromes are:");
    for (int i = a; i <= b; i++)
    {
        if (isPalindrome(i))
            printf(" %d", i);
    }

    // Print all the prime numbers
    printf("\nThe Prime numbers are:");
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
            printf(" %d", i);
    }

    // Print all the strong numbers
    printf("\nThe Strong number are:");
    for (int i = a; i <= b; i++)
    {
        if (isStrong(i))
            printf(" %d", i);
    }
    printf("\n");

    return 0;
}
