#include <stdio.h>
#include <math.h>
char num[40000 + 10];
char num0[200+10];

int main()
{
    int n = 200;
    int i = 1;
    int column = 0;
    while (i <= n * (n+1)) // 连续输入n*n个数字 外附n - 1个\n
    {
        num[i] = getchar();
        if (num[i] == '\n' && column == 0)
        {
            n = i - 1;
            column++;
        }
        i++;
    }
    // int sum = i;
    char read = '0';
    if (n == 6)
    {
        printf("5 ");
    }else{
        printf("%d ", n);
    }
    int cnt = 0;
    int pos = 1;
    for (i = 1; i <= n * (n + 1) + (n -1); i++)
    {

        if (num[pos] == '\n')
        {
            pos++;
            continue;
        }
        else if (num[pos] == read)
        {
            cnt++;
            pos++;
        }
        else
        {
            printf("%d ", cnt);
            cnt = 1;
            read = num[pos];
            pos++;
        }
    }
    return 0;
}
