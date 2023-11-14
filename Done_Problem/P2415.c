#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char num[300];
int s[35];
char temp[5];
unsigned long long int sum[20];

int main()
{
    fgets(num, 300, stdin);
    int cnt = 0;  // for temp
    int cntt = 0; // for s, and the length of s
    for (int i = 0; i < 300; i++)
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            temp[cnt] = num[i];
            cnt++;
        }
        else
        {
            s[cntt] = atoi(temp);
            for (int q = 0; q < 5; q++)  // !!必须清空；用\0来填充temp，否则会出现 100 99 --> 100 990
            {
                temp[q] = '\0';
            }
            cnt = 0;
            cntt++;
        }
        if (num[i] == '\n')
        {
            break;
        }
    }
    int length = cntt;

    unsigned long long int p = pow(2, length - 1);
    int site = 0; // for sum
    int max_site = 0;
    for (int i = 0; i < length; i++)
    {
        sum[site] += p * s[i];
        if (sum[site] >= 10)
        {
            while (sum[site] >= 10)
            {
                sum[site + 1] += sum[site] / 10;
                sum[site] = sum[site] % 10;
                site++;
            }
            max_site = (max_site < site) ? site : max_site;
            site = 0;
        }
    }
    
        for (int i = max_site; i >= 0; i--)
        {
            printf("%llu", sum[i]);
        }
        printf("\n");
    

    return 0;
}

// Writen by Mostly_Hamrless