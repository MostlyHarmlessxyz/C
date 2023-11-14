/*辗转相除法，最大公约数

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c = a, d = b;
    int t;
    do
    {
        t = a % b;
        a = b;
        b = t;
    } while (b != 0);
    printf("%d和%d的最大公约数是%d\n",c,d,a);
    return 0;
}
*/ 

#include <stdio.h>

int main()
{
    int a = 2;
    int i,j,k;
    //scanf("%d",&a);
    int cnt = 0;
    
    i = a;
    while (i<=a+3)
    {
        j = a;
        while (j<=a+3)
        {
            k = a;
            while (k<=a+3)
            {
                if(i!=j && i != k && k!=j)
                {
                    cnt++;
                    printf("%d%d%d",i,j,k);
                    if (cnt == 6)
                    {
                        printf("\n");
                        cnt = 0;
                    }else{
                        printf(" ");
                    }
                    
                }
            }
            
        }
        
    }
    return 0;
}
