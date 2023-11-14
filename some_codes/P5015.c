#include <stdio.h>

int main(void)
{
    char title[10] = {0};
    fgets(title, 10, stdin);
    int i = 0;
    int length = 0;
    do
    {
        if (title[i] != ' ' && title[i] != '\n')
        {
            length++;
        }
        i++;
    } while (title[i] != '\0');
    printf("%d",length);
    
}
