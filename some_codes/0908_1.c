/*
#include <stdio.h>

int main()
{
    int n = 0;
    do{
        printf("爆炸准备完成率：%d%%\n",n);
        n++;
    }while (n <= 100);
}

*/
/*
    //质数运算

    #include <stdio.h>

int main()
{
    int x = 2;

    // scanf("%d",&n);
    while (x<10000)
    {
        int isPrime = 1; //x是质数
    for ( int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            isPrime = 0; //x不是质数
            }
    }
    if (isPrime == 1){
        printf("%d是质数\n",x);
    }
    else{
        printf("%d不是质数\n",x);
    }

    x++;
    }
    return 0;
    } 
*/
/*
UNFINNISHED

#include <stdio.h>

int main()
{
    int x = 2;
    int l;
    scanf("%d",&l);
    int ll = 0;
    int count = 0;

    // scanf("%d",&n);
    do{
        int isPrime = 1; //x是质数
    for ( int i = 2; i < x; i++)
        {
        if (x % i == 0){
            isPrime = 0; //x不是质数
            }
        }
    if (isPrime == 1){
        printf("%d\n",x);
        ll += x;
        count++;
        }
        x++;
    }while (ll < l);
    printf("%d\n",count);
    return 0;
}

*/

    
#include <stdio.h>

int main()
{
    int i = 1;
    double M = 0;
    int count = 1;
    while (count < 1000000000000)
    {
       M = M + (1.0 / i);
       i++;
       count++;
       printf("%lf\n",M);
    }
    return 0;
}
