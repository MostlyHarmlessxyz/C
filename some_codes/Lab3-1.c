#include <stdio.h>

#include <string.h>
#include <math.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int s, v, t;
    int sum = 0;
    v = 25;
    t = 2;
    for (i = 0; i < n; i++)
    {
        sum += v * t;
        v = 2 * v;
        t += 2;
    }
    printf("%d\n", sum);
    return 0;
}
