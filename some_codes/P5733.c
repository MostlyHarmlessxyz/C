#include <stdio.h>
#include <string.h>
int main()
{
    char* c;
    int i;
    int n;
    scanf("%s", c); // 输入一个字符串/字符数组
    n = strlen(c);
    for (i = 1; i <= n; i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] += 'A' - 'a';
        }
    }
    printf("%s", c);

    return 0;
}
