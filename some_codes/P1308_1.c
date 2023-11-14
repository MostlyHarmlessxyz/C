#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[10 + 10];
char text[1000000 + 10];

int main(void)
{
    int time = 0;
    fgets(str, 20, stdin);
    fgets(text, 1000000 + 10, stdin);
    text[strlen(text)] = '\0';
    str[strlen(str)] = '\0';
    int a = 0;
    int cnt_a = 0;
    int length = 0; // str的长度
    do
    {
        a += tolower(str[cnt_a]);
        cnt_a++;
        length++;
    } while (str[cnt_a] != '\0' && str[cnt_a] != '\n');
    int stutus = 0; // 0 就读取，1 就不读取了
    int values = 0;
    int xyz = 0; // 首次出现位置
    int tt = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if(text[i] != ' ' && text[i] != '\n')
        {
            values += tolower(text[i]);
        }else{
            if (values == a && tt == 0)
            {
                xyz = i - strlen(str) + 1;
                time++;
                tt++;
                values = 0;
            }else if (values == a)
            {
                time++;
                values = 0;
            }else{
                values = 0;
            }
        }
    }
    if(time != 0)
    {
        printf("%d %d\n", time, xyz);
    }else{
        printf("-1\n");
    }
    return 0;
}