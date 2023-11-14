#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

unsigned long long int num[20 + 5]; // 存储数字
int digits[20 + 5][10];             // 存储数字各位，注意 是倒序存储的；
int length[20 + 5];                 // 数字位数；
int final[200];                     // 最终结果
int cnt;
unsigned long long int temp_num[20 + 5];

void HAHA(int n);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &num[i]);
        int temp = num[i];
        int cnt = 0;
        do
        {
            digits[i][cnt] = temp % 10;
            temp /= 10;
            cnt++;
        } while (temp > 0);
        length[i] = cnt;
    }
    for (int i = 0; i < n; i++)
    {
        HAHA(n);
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("%d", final[i]);
    }
    printf("\n");
    return 0;
}

// Writen by Mostly_Hamrless

void HAHA(int n)
{
    int pair[20 + 5][20 + 5] = {0};

    int max_length = 0;
    for (int i = 0; i < n; i++)
    {
        max_length = (max_length < length[i]) ? length[i] : max_length;
    }

    int first_num = 0;
    int first;
    int second_num = -1;
    int second;
    for (int i = 0; i < n; i++)
    {
        temp_num[i] = num[i] * pow(10, max_length - length[i]);
        if (temp_num[i] > first_num)
        {
            second_num = first_num;
            first_num = temp_num[i];
            second = first;
            first = i;
        }
        else if (temp_num[i] > second_num)
        {
            second_num = temp_num[i]; // 最后一个错误 second_num 写成 second了
            second = i;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int d = temp_num[i] - temp_num[j];
            if (d < 10 && d > -10) // 包含 ？ ==10的情况吗
            {
                if (temp_num[i] >= temp_num[j])
                {
                    pair[i][j] = 1;
                }
                else
                {
                    pair[j][i] = 1;
                }
            }
        }
    }

    if (pair[first][second] == 1) // 就最后一位不一样 例如 37(0) & 371
    {
        if (digits[first][0] <= digits[second][length[second] - 1]) // 如果first的末位小于second首位
        {
            for (int i = length[second] - 1; i >= 0; i--)
            {
                final[cnt] = digits[second][i];
                digits[second][i] = 0;
                cnt++;
            }

            for (int i = length[first] - 1; i >= 0; i--)
            {
                final[cnt] = digits[first][i];
                digits[first][i] = 0;
                cnt++;
            }
            num[first] = 0;
            length[first] = 0;
            num[second] = 0;
            length[second] = 0;
        }
        else
        {
            for (int i = length[first] - 1; i >= 0; i--)
            {
                final[cnt] = digits[first][i];
                digits[first][i] = 0;
                cnt++;
            }

            for (int i = length[second] - 1; i >= 0; i--)
            {
                final[cnt] = digits[second][i];
                digits[second][i] = 0;
                cnt++;
            }

            num[first] = 0;
            length[first] = 0;
            num[second] = 0;
            length[second] = 0;
        }
    }
    else
    {
        for (int i = length[first] - 1; i >= 0; i--)
        {
            final[cnt] = digits[first][i];
            digits[first][i] = 0;
            cnt++;
        }
        num[first] = 0;
        length[first] = 0;
    }

    // int first_num = 0;
    // int nb;
    // for (int i = 0; i < n; i++)
    // {
    //     int temp1 = max_length;
    //     int temp2 = length[i] - 1;
    //     unsigned long long int temp_num = 0;
    //     while (temp2 >= 0)
    //     {
    //         temp_num += digits[i][temp2] * pow(10, temp1);
    //         temp1--;
    //         temp2--;
    //     }
    //     if (first_num < temp_num)
    //     {
    //         first_num = temp_num;
    //         nb = i;
    //     }
    // }
    // for (int i = length[nb] - 1; i >= 0; i--)
    // {
    //     final[cnt] = digits[nb][i];
    //     cnt++;
    // }
    // num[nb] = 0;
    // length[nb] = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     digits[nb][i] = 0;
    // }
    return;
}
