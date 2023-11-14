#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countNum(char text[], int numbers[]);

int main()
{
    char text_1[110];
    char text_2[110];
    char text_3[110];
    char text_4[110];
    fgets(text_1, sizeof(text_1), stdin);
    fgets(text_2, sizeof(text_2), stdin);
    fgets(text_3, sizeof(text_3), stdin);
    fgets(text_4, sizeof(text_4), stdin);

    int numbers[26] = {0};
    countNum(text_1, numbers);
    countNum(text_2, numbers);
    countNum(text_3, numbers);
    countNum(text_4, numbers);

    int Maxcnt = 0;
    for (int i = 0; i < 26; i++)
    {
        Maxcnt = (numbers[i] > Maxcnt) ? numbers[i] : Maxcnt;
    }

    int excel[26][410] = {0};
    for (int i = 0; i < Maxcnt; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (Maxcnt - numbers[j] <= i)
            {
                excel[i][j]++;
            }
        }
    }

    for (int i = 0; i < Maxcnt; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            if (excel[i][j] == 0)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        if (excel[i][25] == 0)
        {
            printf(" \n");
        }
        else
        {
            printf("*\n");
        }
    }

    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
    printf("%d\n", Maxcnt);

    return 0;
}

void countNum(char text[], int numbers[])
{
    for (int i = 0; i < strlen(text); i++)
    {
        char c = toupper(text[i]);
        if (isalpha(c))
        {
            numbers[c - 'A']++;
        }
    }
}
