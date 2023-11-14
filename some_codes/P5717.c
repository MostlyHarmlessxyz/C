#include <stdio.h>
#include <math.h>
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
    if (x>=y+z)
    {
        printf("Not triangle\n");
    }else{
        if (pow(x,2) == pow(y,2)+pow(z,2)) // 三角形直锐钝
        {
            printf("Right triangle\n");
        }else{
            if (pow(x,2) > pow(y,2)+pow(z,2))
            {
                printf("Obtuse triangle\n");
            }else{
                printf("Acute triangle\n");
            }
            
        }
        if (x == y || y == z)
        {
            printf("Isosceles triangle\n"); // 若是等腰，就先输出一个
            if (x == y && y == z)
            printf("Equilateral triangle\n");
        }
    }
    
return 0;
}
