// Program to calculate the factorial of a given number.
#include <stdio.h>

int main()
{
    int n;
    printf(" Enter a number to calculate its factorial : ");
    scanf(" %d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf(" The factorial of %d is : %d\n", n, factorial);
    return 0;
}