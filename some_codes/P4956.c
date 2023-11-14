#include <stdio.h>
//注意 k 必须大于 0
int main()
{
    int N ;
    int x,k;
    int kk;
    scanf("%d",&N);
    int t = 0;
    x = N / 364; //probably maximum x
    if (x > 100)
    {
        x = 100;
    }
    int cnt=0;
    kk = N - (x*364);

    while(kk < 1092)
    {
        x--;
        kk+=364;
    }
    while (cnt == 0)
    {
        if (kk % 1092 == 0 )
        {
            k = kk / 1092;
            printf("%d\n%d\n",x,k);
            cnt++;
        }else{
            x--;
            kk+=364;
        }
    }
return 0;
}
// 52*7= 364
// (21) * 52 = 1092