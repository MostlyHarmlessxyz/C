#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double sum;
    if (n>150)
    {
        if (n>400)
        {
            sum = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;
        }else {
            sum = 150 * 0.4463 + (n - 150) * 0.4663;
        }
    }else{
        sum = n * 0.4463;
    }
    printf("%.1lf\n",sum);
return 0;
}
