// print Factorial of number within a given range:
#include <stdio.h>

int main()
{
    int r, s;
    printf(" Enter starting number for factorials : ");
    scanf(" %d", &r);
    printf(" Enter ending number for factorials : ");
    scanf("%d", &s);
    
    for (int i = r; i <= s; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        printf(" The factorial of %d is : %d\n", i, factorial);
    }

    return 0;
}
