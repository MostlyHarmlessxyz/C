#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char group[10];
    char star[10];
    fgets(star, 10, stdin);

    fgets(group, 10, stdin);


    long long int a = 1;
    long long int b = 1;
    for (int i = 0; i < 10; i++)
    {
        if (star[i] == '\n')
        {
            a = a % 47;
            break;
        }else{
            a *= (star[i] - 'A' + 1);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (group[i] == '\n')
        {
            b = b % 47;
            break;
        }else{
            b *= (group[i] - 'A' + 1);
        }
    }

    if (a == b)
    {
        printf("GO\n");
    }else{
        printf("STAY\n");
    }
    
    return 0;
}
// Writen by Mostly_Hamrless