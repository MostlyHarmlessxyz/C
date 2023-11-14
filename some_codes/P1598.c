#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countNum(char text[], int numbers[]);

int main()
{
    char text_1[1000000];
    char text_2[1000000];
    char text_3[1000000];
    char text_4[1000000];
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

    int excel[410][26] = {0};

    for (int i = 0; i < Maxcnt; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (Maxcnt - (numbers[j] + i) <= 0)
            {
                excel[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < Maxcnt; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            if (excel[i][j] == 1)
            {
                printf("* ");
            }
            else if (excel[i][j] == 0)
            {
                printf("  ");
            }
        }
        if (excel[i][25] == 1)
        {
            printf("*\n");
        }
        else if (excel[i][25] == 0)
        {
            printf(" \n");
        }
    }

    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z \n");
    // printf("%d\n", Maxcnt);
    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%d\n",numbers[i]);
    // }

    return 0;
}

void countNum(char text[], int numbers[])
{
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            char c = toupper(text[i]);
            numbers[c - 'A']++;
        }
    }
}
