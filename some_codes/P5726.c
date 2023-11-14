#include <stdio.h>

int main()
{
    int highest,lowest;
    int n;
    scanf("%d",&n);
    int score[n];
    int i;
    int sum = 0;
    double realscore;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&score[i]); // 初始化，读取数值。
        sum+=score[i];
    }
    highest = score[0];
    lowest = score[0];
    for ( i = 0; i < n; i++)
    {
        if (score[i]<lowest)
            lowest = score[i];
        if(score[i]>highest)
            highest = score[i];
    }
    sum-=(highest+lowest);
    realscore = sum * 1.0 / (n - 2);
    printf("%.2f\n",realscore);
    return 0;
}
