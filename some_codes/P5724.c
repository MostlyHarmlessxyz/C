#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    int i;
    int max;
    int min;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        if (i == 0)
        {
            max = num[i];
            min = num[i];
        }
        
        if (max<num[i])
        {
            max = num[i];
        }
        if (min>num[i])
        {
            min = num[i];
        }
    }
    printf("%d\n",max - min);
return 0;
}
