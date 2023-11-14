#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int sort(int site);

int order[10000 + 10];
int where[10000 + 10];

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &order[i]);
        // if (i < n - 1)
        // {
        //     cnt += abs(i + 1 - order[i]);
        // }
    }
    printf("%d\n", cnt);

    return 0;
}
// Writen by Mostly_Hamrless