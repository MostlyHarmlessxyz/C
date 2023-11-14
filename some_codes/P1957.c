#include <stdio.h>

void printEquation(char before[20], int stutus);
int result(int real_num[], int stutus);

int main(void)
{
    char before[20];
    char after[20];
    int equation_num;
    int stutus = 0; // 0 is +; 1 is -; 2 is *;
    scanf("%d", &equation_num);
    getchar(); // 用于吸收前一个 scanf() 留下的换行符
    fgets(before, 20, stdin);
    stutus = before[0] - 'a';
    printEquation(before, stutus);
    for (int i = 1; i < equation_num; i++)
    {
        fgets(before, 20, stdin);
        if (before[0] >= 'a' && before[0] <= 'c')
        {
            stutus = before[0] - 'a';
        }
        printEquation(before, stutus);
    }
    return 0;
}

void printEquation(char before[20], int stutus)
{
    char afterr[30] = {0};
    char num[2][10] = {0}; // 存储两个数字的每个位
    int real_num[2] = {0}; // 存储int类型的数字
    char sign[3] = {'+', '-', '*'};
    int length = 0;
    int break_time = 0;
    int i = 0; // after
    int j = 0; // before
    int numth = 0;
    int k = 0;
    if (before[0] >= 'a' && before[0] <= 'c')
    {
        j = 2;
    }

    do
    {
        if (before[j] != ' ' && before[j] != '\n')
        {
            afterr[i] = before[j];
            num[numth][k] = before[j];
            k++;
            i++;
            j++;
            length++;
        }
        else if (before[j] == ' ')
        {
            afterr[i] = sign[stutus];
            j++;
            i++;
            numth++;
            k = 0;
            length++;
        }
        else
        {
            break_time = 1;
        }
    } while (break_time != 1);
    afterr[i] = '=';
    i++;
    // 数字提取
    int cnt = 0;
    while (num[0][cnt] != '\0')
    {
        real_num[0] = real_num[0] * 10 + (num[0][cnt] - '0');
        cnt++; 
    }
    cnt = 0;
    while (num[1][cnt] != '\0')
    {
        real_num[1] = real_num[1] * 10 + (num[1][cnt] - '0');
        cnt++; 
    }
    
    // 计算结果
    int r = result(real_num, stutus);
    char rr[20] = {0};
    sprintf(rr, "%d", r);
    int cntt = 0;
    do
    {
        afterr[i] = rr[cntt];
        i++;
        cntt++;
    } while (rr[cntt] != '\0');
    afterr[i] = '\0';
    printf("%s\n", afterr);
    printf("%d\n", i);
}

int result(int real_num[], int stutus)
{
    int r;
    if (stutus == 0)
    {
        r = real_num[0] + real_num[1];
    }else if (stutus == 1)
    {
        r = real_num[0] - real_num[1];
    }else
    {
        r = real_num[0] * real_num[1];
    }
    return r;
}