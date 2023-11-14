#include <stdio.h>

int main()
{
    int a;
    int i,j,k;
    scanf("%d",&a);
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
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}

// 这个排列顺序保证的是 先个位数大一下。导致十位数++，同时把个位数调回最小，并重新++，得到a(a+1)(a+2),之后是a(a+1)(a+3)…………

// cnt为计数器，保证每行输出6个数字，并换行