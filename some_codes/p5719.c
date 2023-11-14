#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int cnt1 = 0,cnt2 = 0;
    int sum1 = 0,sum2 = 0;
    double avg1,avg2;
    int i;
    for ( i = 1; i < n+1; i++)
    {
        if (i % k ==0)
        {
            cnt1++;
            sum1+=i;
        }else{
            cnt2++;
            sum2+=i;
        }
    }
    avg1 = (sum1 * 1.0)/cnt1;
    avg2 = (sum2 * 1.0)/cnt2;
    printf("%.1f %.1f\n",avg1,avg2);
return 0;
}
