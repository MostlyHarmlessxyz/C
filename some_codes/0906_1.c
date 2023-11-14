#include <stdio.h>
#include <math.h>

int main()
{
    int a=0;
    int i=0;
    while (i <= 100)
    {
        a = a + pow(2,i);
        i++;
        printf("%d\n",a);
    }
    return 0;
}
// 2147483647