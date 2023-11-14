#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int excel[1200][1200];

void cheat(int excel[][1200], int begin_x, int begin_y, int length);

int main()
{
    int n;
    scanf("%d", &n);
    int p = pow(2, n);
    cheat(excel, 0, 0, p);
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", 1 - excel[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// Writen by Mostly_Hamrless
// y = 1 - x

void cheat(int excel[][1200], int begin_x, int begin_y, int length)
{
    if (length != 1)
    {
        for (int i = begin_x; i < (length / 2); i++)
        {
            for (int j = begin_y; j < (length / 2); j++)
            {
                excel[i][j] = 1;
            }
        }
        cheat(excel, 0, length / 2, length / 2);
        cheat(excel, length / 2, 0, length / 2);
        cheat(excel, length / 2, length / 2, length / 2);
    }
    else
    {
        return;
    }
}