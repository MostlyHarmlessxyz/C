#include <stdio.h>
#include <math.h>
int main()
{
    double s;
    scanf("%lf",&s);
    int step = 0;
    double length = 0;
    if (s == 0)
    {
        printf("0\n");
    }else{
        do
        {
            length += 2 * pow(0.98,step);
            step++;
        } while (length<s);
        printf("%d\n",step);
    }
return 0;
}
