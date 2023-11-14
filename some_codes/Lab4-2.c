#include <stdio.h>

int Gcd(int a, int b);

int main(void)
{
    int a, b;
    printf("Input a,b:\n");
    scanf("%d,%d", &a, &b);
    if (a <= 0 || b <= 0)
    {
        printf("Input number should be positive!\n");
        return 1;
    }
    else
    {
        if (a > b)
        {
            printf("Greatest Common Divisor of %d and %d is %d\n", a, b, Gcd(a, b));
        }
        else if (a < b)
        {
            printf("Greatest Common Divisor of %d and %d is %d\n", a, b, Gcd(b, a));
        }
        else
        {
            printf("Greatest Common Divisor of %d and %d is %d\n", a, b, a);
        }
        return 0;
    }
}

int Gcd(int a, int b)
{
    // a > b
    int remainder = 0;
    do
    {
        remainder = a % b;
        a = b;
        b = remainder;
    } while (remainder != 0);
    return a;
}