// #include <stdio.h>

// int main()
// {
//     int a;
//     double t;
//     double T;
//     scanf("%d %lf",&a,&t);
//     if(a==0)
//     {
//         T=(t-32)/1.8;
//         printf("摄氏度是");
//     }else
//     {
//         T=(t*1.8+32);
//         printf("华氏度是");
//     }
//     printf("%.2f\n",T);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     char a;
//     scanf("%d",&a);
//     // a = 49;
//     // b = '1';
//     printf("%c %d\n",a,a);
// return 0;
// }


#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    int i;
    int cnt = 0;
    if (n % 2 != 0)
    {
        for ( i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                cnt++;
        }
    }else{
        for ( i = 2; i <= sqrt(n); i+=2)
        {
            if (n % i == 0)
                cnt++;
        }
    }
    
    return cnt;
}

void NumPrime(int n)
{
    int num[n];
    int cnt = 0;
    int i = 1;
    int j = 3;
    num[0] = 2;
    do
    {
        if (isPrime(j) == 0)
        {
            num[i] = j;
            i++;
        }
        j+=2;
    } while (i < n);
    for (i = 0; i < n; i++)
    {
        printf("这是第%d个素数：%d\n",i+1,num[i]);
    }
    
}

int main()
{
    printf("你他妈需要几个素数？快他妈说");
    int n;
    scanf("%d",&n);
    NumPrime(n);
    return 0;
}
