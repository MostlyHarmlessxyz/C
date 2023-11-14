//Not done
#include <stdio.h>

char square1[121];
char square2[121];
char square0[121];

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for (i = 1; i <=n; i++) // 初始
    {
        for ( j = 1; j <= n; j++)
        {
            scanf("%c",square1[i*j]);
        }
    }
    for (i = 1; i <=n; i++) // 最终
    {
        for ( j = 1; j <= n; j++)
        {
            scanf("%c",square2[i*j]);
        }
    }
    
    
    
return 0;
}
