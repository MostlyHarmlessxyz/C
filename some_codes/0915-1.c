#include <stdio.h>

int main()
{
    int i = 910;
    int p;
    p = (int)&i;
    printf("0x%x\n",p);
    printf("%p\n",&i);
    printf("%lu\n%lu\n",sizeof(int),sizeof(&i));
return 0;
}
