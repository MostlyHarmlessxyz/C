#include <stdio.h>
void square(int n)
{
    int i;
    int cnt = 0;
    for (i = 1; i < n*n+1; i++)
    {
        printf("%02d",i);
        cnt++;
        if (cnt == n){
            printf("\n");
            cnt = 0; // 归0
        }
    }
}

void triangle(int n)
{
    int i;
    int sum = 1;
    for (i = 1; i <= n; i++)
    {
        //int num = i;
        int space = n - i;
        while (space>0)
        {
            printf("  ");
            space--;
        }
        while (sum<=((i+1)*i)/2)
        {
            printf("%02d",sum);
            sum++;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    square(n);
    printf("\n");
    triangle(n);
return 0;
}
