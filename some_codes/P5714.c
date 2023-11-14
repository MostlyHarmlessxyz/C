// 肥胖问题 BMI

#include <stdio.h>

int main()
{
    double m,h;
    scanf("%lf %lf",&m,&h);

    double BMI;
    BMI = m / (h*h);
    if (BMI < 18.5)
    {
        printf("Underweight\n");
    }else{
        if (BMI < 24)
        {
            printf("Normal\n");
        }else{
            printf("%.4f\nOverweight\n",BMI);
        }
        
    }
    
return 0;
}
