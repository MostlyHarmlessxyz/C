#include <stdio.h>

int main()
{
    int apple[10];
    int tao;
    int cnt = 0;
    int i;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&apple[i]);
    }
    scanf("%d",&tao);
    for ( i = 0; i < 10; i++)
    {
        if (apple[i]<=tao+30)
            cnt++;
    }
    printf("%d\n",cnt);
    
    
return 0;
}
