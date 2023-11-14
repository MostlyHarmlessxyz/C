#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char PASCAL[300];
    fgets(PASCAL, 300, stdin);

    int length = strlen(PASCAL);
    int num[3] = {0};
    for (int i = 0; i < length; i += 5)
    {
        if (isalpha(PASCAL[i + 3]))
        {
            num[PASCAL[i] - 'a'] = num[PASCAL[i + 3] - 'a'];
        }
        else
        {
            num[PASCAL[i] - 'a'] = PASCAL[i + 3] - '0';
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
// Writen by Mostly_Hamrless