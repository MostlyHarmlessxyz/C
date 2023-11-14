#include <stdio.h>

int main()
{
    int n , x ;
    scanf("%d %d",&n,&x);
    //int number[n];
    int i = 1; 
    int cnt = 0;
    for (i = 1; i <= n; i++)
    {
        int k = i;  // k作为i的替身，i的value避免change
        while (k != 0)
        {
            int m;
            m = k % 10;
            // m ==? x;
            if (m == x)
            {
                cnt++;
            }
            k = (k - m) / 10;
        }
    }
    printf("%d\n",cnt);

return 0;
}
