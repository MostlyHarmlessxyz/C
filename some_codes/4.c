#include <stdio.h>
#include <string.h>

int main()
{
    char names[] = {"Carter", "Tom"};
    char numbers[] = {"110", "120"};

    char name[20];
    scanf("%s", &name);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;

} 