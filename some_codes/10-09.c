#include <stdio.h>

int main()
{
    int i = 0;
    char *s = "Hello,World!";
    // s[0] = 'B';
    char *s2 = "Hello,World!";
    printf("&i=%p\n",&s);
    printf("s=%p\n",s);
    printf("s2=%p\n",s2);
    printf("Here! s[0]=%c\n", s[0]);
return 0;
}
