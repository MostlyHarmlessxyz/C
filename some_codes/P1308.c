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
    int save_first = 0;
    int cnt_b = 0;
    int cnt_c = 0;
    int save_second = 0;
    int cnt_d = 0;
    int save_third = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] != ' ' && text[i] != '\n')
        {
            values += tolower(text[i]);
            if (cnt_b == 0)
            {
                save_first = tolower(text[i]);
                cnt_b++;
            }else if (cnt_b != 0 && cnt_c == 0)
            {
                save_second = tolower(text[i]);
                cnt_c++;
            }else if(cnt_b != 0 && cnt_c != 0 && cnt_d == 0)
            {
                save_third = tolower(text[i]);
                cnt_d++;
            }
        }
        else
        {
            if (cnt_d != 0)
            {
                if (values == a && tt == 0 && save_first == tolower(str[0]) && save_second == tolower(str[1]) && save_third == tolower(str[2]))
                {
                    xyz = i - strlen(str) + 1;
                    time++;
                    tt++;
                    values = 0;
                }
                else if (values == a && save_first == tolower(str[0]) && save_second == tolower(str[1]) && save_third == tolower(str[2]))
                {
                    time++;
                    values = 0;
                }
                else
                {
                    values = 0;
                }
            }
            else if(cnt_c != 0)
            {
                if (values == a && tt == 0 && save_first == tolower(str[0]) && save_second == tolower(str[1]))
                {
                    xyz = i - strlen(str) + 1;
                    time++;
                    tt++;
                    values = 0;
                }
                else if (values == a && save_first == tolower(str[0]) && save_second == tolower(str[1]))
                {
                    time++;
                    values = 0;
                }
                else
                {
                    values = 0;
                }
            }else
            {
                if (values == a && tt == 0 && save_first == tolower(str[0]))
                {
                    xyz = i - strlen(str) + 1;
                    time++;
                    tt++;
                    values = 0;
                }
                else if (values == a && save_first == tolower(str[0]))
                {
                    time++;
                    values = 0;
                }
                else
                {
                    values = 0;
                }
            }

            cnt_b = 0;
            cnt_c = 0;
            cnt_d =0;
        }
    }
    if (time != 0)
    {
        printf("%d %d\n", time, xyz);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}