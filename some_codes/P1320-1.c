#include <stdio.h>
#include <math.h>
#include <string.h>
char num[40000 + 10];


int main()
{
    char num0[200+10];
    int n;
    int i = 1;
    scanf("%s",num0);
    n = strlen(num0);
    strcat(num,num0);
    for (i = 2; i <=n; i++)
    {
        scanf("%s",num0);
        strcat(num,num0);
    }
    // int sum = i;
    char read = '0';
    printf("%d ", n);
    int cnt = 0;
    int pos = 0;
    for (i = 0; i <= n*n; i++)
    {
        if (num[pos] == read)
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
