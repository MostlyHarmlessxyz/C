#include <stdio.h>

void marge(int length, int array[]);

int main(void)
{
    int n;
    printf("一共有多少数字啊： ");
    scanf("%d", &n);
    printf("那你开始输入吧，每个数字一个回车\n");
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    marge(n, num);

    printf("排序后的数字是这样的：\n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", num[i]);
    }
    printf("%d\n", num[n - 1]);
    return 0;
}

void marge(int length, int array[])
{
    int p, q;
    p = (int)(length * 0.5 + 0.5); // 前一半 （若为2k+1，则p比q多1）
    q = (int)(length * 0.5);       // 后一半
    int num_1[p];
    int num_2[q];
    int m = 0, n = 0;
    for (int i = 0; i < p; i++)
    {
        num_1[i] = array[i];
    }
    for (int i = 0; i < q; i++)
    {
        num_2[i] = array[p + i];
    }
    
}