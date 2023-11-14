#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void getFactorial(int n);
int num = 1;
int main()
{
    int n;
    scanf("%d", &n);
    getFactorial(n);
    printf("%d\n", num);
    return 0;
}
// Writen by Mostly_Hamrless
void getFactorial(int n)
{
    num *= n;
    if (n == 1)
    {
        return;
    }
    getFactorial(n - 1);
    
}