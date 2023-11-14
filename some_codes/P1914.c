#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    char *code;
    scanf("%d", &n);
    scanf("%s", code);
    int length = strlen(code);

    for (int i = 0; i < length; i++)
    {
        if (code[i] + n >122)
        {
            code[i] = ((n -('z'- code[i]) - 1)%26) + 'a'; // 20231009_我是傻逼
        }else{
            code[i] += n;
        }
    }
    printf("%s\n%d", code,length);

    return 0;
}
