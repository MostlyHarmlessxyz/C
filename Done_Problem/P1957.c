#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int state; // 1 -> +; 2-> -; 3 -> *

char operator[3] = {'+', '-', '*'};
void Print(int n);
int Getlen(int n);

typedef struct
{
    int p;
    int q;
    char operator;
    int out;
    int length;
} suanshu;

suanshu shizi[100];

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    getchar(); // 傻逼，两次getchar做预处理
    Print(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d%c%d=%d\n", shizi[i].p, shizi[i].operator, shizi[i].q, shizi[i].out);
        printf("%d\n", shizi[i].length);
    }

    return 0;
}

int Getlen(int n)
{
    int length = 0;
    int m;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        if (n < 0)
        {
            m = -n;
            for (; m > 0; m /= 10, length++)
                ;
            return (length + 1);
        }

        for (; n > 0; n /= 10, length++)
            ;
        return length;
    }
}
void Print(int n)
{
    for (int i = 0; i < n; i++)
    {
        char input[20];
        fgets(input, 20, stdin);
        input[strlen(input) - 1] = '\0';
        char x[6] = {'\0'};
        char y[6] = {'\0'};

        if (input[0] == 'a' || input[0] == 'b' || input[0] == 'c')
        {
            int j;
            int cnt = 0;
            for (j = 2; input[j] >= '0' && input[j] <= '9'; j++, cnt++)
            {
                x[cnt] = input[j];
            }
            for (cnt = 0, j++; input[j] >= '0' && input[j] <= '9'; j++, cnt++)
            {
                y[cnt] = input[j];
            }

            int p = atoi(x);
            int q = atoi(y);
            int out;

            state = input[0] - 'a';

            if (state == 0)
            {
                out = p + q;
            }
            else if (state == 1)
            {
                out = p - q;
            }
            else
            {
                out = p * q;
            }
            int length = Getlen(p) + Getlen(q) + Getlen(out) + 2;
            // if (out < 0)
            // {
            //     length++;
            // }
            shizi[i].p = p;
            shizi[i].q = q;
            shizi[i].length = length;
            shizi[i].out = out;
            shizi[i].operator= operator[state];
            // printf("%d%c%d=%d\n", p, operator[state], q, out);
            // printf("%d\n", length);
        }
        else
        {
            int j;
            int cnt = 0;
            for (j = 0; input[j] >= '0' && input[j] <= '9'; j++, cnt++)
            {
                x[cnt] = input[j];
            }
            for (cnt = 0, j++; input[j] >= '0' && input[j] <= '9'; j++, cnt++)
            {
                y[cnt] = input[j];
            }

            int p = atoi(x);
            int q = atoi(y);
            int out;

            if (state == 0)
            {
                out = p + q;
            }
            else if (state == 1)
            {
                out = p - q;
            }
            else
            {
                out = p * q;
            }
            int length = Getlen(p) + Getlen(q) + Getlen(out) + 2;

            // printf("%d%c%d=%d\n", p, operator[state], q, out);
            // printf("%d\n", length);
            shizi[i].p = p;
            shizi[i].q = q;
            shizi[i].length = length;
            shizi[i].out = out;
            shizi[i].operator= operator[state];
        }
    }
}