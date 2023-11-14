#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};

int main()
{
    char text[210];
    fgets(text, 210, stdin);
    int length = strlen(text) - 1;
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        // line 31
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            sum += num[text[i] - 'a'];
        }
        if (text[i] == ' ')
        {
            sum += 1;
        }
    }
    printf("%d\n",sum);
    
        
    return 0;
}
// Writen by Mostly_Hamrless

// int k = text[i] - 'a'; // 转换为数字
        // if (k == ' ' - 'a')
        // {
        //     sum += 1;
        // }
        // else
        // {
        //     if (k < 's' - 'a')
        //     {
        //         sum += (k % 3) + 1;
        //     }
        //     else
        //     {
        //         switch (k)
        //         {
        //         case 18:
        //             sum += 4;
        //             break;
        //         case 19:
        //             sum += 1;
        //             break;
        //         case 20:
        //             sum += 2;
        //             break;
        //         case 21:
        //             sum += 3;
        //             break;
        //         case 22:
        //             sum += 1;
        //             break;
        //         case 23:
        //             sum += 2;
        //             break;
        //         case 24:
        //             sum += 3;                  
        //             break;
        //         case 25:
        //             sum += 4;
        //             break;
        //         default:
        //             break;
        //         }
        //     }
        // }