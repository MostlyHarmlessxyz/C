#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    double x, y;
    scanf("%lf", &x);
    a = (int)x / 100;
    c = (int)x % 10;
    b = ((int)x / 10) % 10;
    d = ((int)x * 10) % 1000;
    y = d + 0.1 * c + 0.01 * b + 0.001 * a;
    printf("%.3f\n", y);
}
