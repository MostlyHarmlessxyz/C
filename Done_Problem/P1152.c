#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

long long int num[11000];
long long int ok[11000];
int main()
{
    int n;
    scanf("%d", &n);
    scanf("%lld", &num[0]);
    for (int i = 1; i < n; i++)
    {
        scanf("%lld", &num[i]);
        if (llabs(num[i] - num[i - 1]) >= n )
        {
            printf("Not jolly\n");
            return 0; // 别乱用return 1
        }
    }

    printf("Jolly\n");
    
    return 0;
}
// Writen by Mostly_Hamrless