#include <stdio.h>

int main()
{
    int a,b,c;
    int x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    if (a - b >=0)
    {
        if (a - c >=0)
        {
            x=a;
            if (b - c >= 0)
            {
                y=b;
                z=c;
            }else {
                y=c;
                z=b;
            }
        }else{
            x=c;
            y=a;
            z=b;
        }
    }else{
        if (b - c >=0)
        {
            x=b;
            if (c-a>=0)
            {
                y=c;
                z=a;
            }else 
            {
                y=a;
                z=c;
            }
        }else{
            x=c;
            y=b;
            z=a;
        }
        
    }
    printf("%d %d %d\n",z,y,x);
    
return 0;
}
