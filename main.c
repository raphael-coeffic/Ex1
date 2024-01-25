#include <stdio.h>
#include "NumClass.h"

int main()
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("The Armstrong numbers are:");
    for (int i = a; i <= b; i++)
    {
        if (isArmstrong(i))
            printf(" %d", i);
    }

    printf("The Palindromes are:");
    for (int i = a; i <= b; i++)
    {
        if (isPalindrome(i))
            printf(" %d", i);
    }

    printf("The Prime numbers are:");
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
            printf(" %d", i);
    }

    printf("The Strong numbers are:");
    for (int i = a; i <= b; i++)
    {
        if (isStrong(i))
            printf(" %d", i);
    }
    // printf("\n");

    return 0;
}
