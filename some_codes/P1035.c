#include <stdio.h>

int main()
{
    double s = 0;
    int k = 1;
    int n;
    scanf("%d",&n);
    do
    {
        s += 1.0 / k;
        k++;
    } while (s<n);
    printf("%d\n",k - 1); // k needs to be minus 1;
    
return 0;
}
