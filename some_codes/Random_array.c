#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,i;
    srand((unsigned long)time(0));
    scanf("%d",&n);
    int num[n];
    for ( i = 0; i <n; i++)
    {
        num[i]=rand() % 100000;
        printf("%d ",num[i]);
    }
    
return 0;
}
