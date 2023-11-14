#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    int peach = 1;
    for (int i = 0; i < n - 1; i++)
    {
        peach = 2 * (peach + 1);
    }
    printf("%d\n", peach);
    
    return 0;
}
// Writen by Mostly_Hamrless