#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    int nn = 0;
    scanf("%d",&n);
    do
    {
        int d = n%10;
        nn = nn*10 + d;
        n /= 10;
    } while (n>0);
    
    while (nn > 0)
    {
        m = nn%10;
        printf("%d",m);
        if (nn > 9)
        {
            printf(" ");
        }else{
            printf("\n");
        }
        nn /= 10;
    }
    
return 0;
}
