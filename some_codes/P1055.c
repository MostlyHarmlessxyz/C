#include <stdio.h>

int main()
{
    int num[9];
    char ori;
    int i;
    int sum = 0;
    int check;
    scanf("%d-%d%d%d-%d%d%d%d%d-%c",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9],ori);
    for ( i = 0; i < 9; i++)
    {
        sum += sum * (i + 1);
    }
    check = sum % 11;
    
    if (ori == 'X' && check == 10 || ori == check)
    {
        printf("Right\n");
    }else{
        if (check == 10)
        {
            printf("%d-%d%d%d-%d%d%d%d%d-X",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9]);
        }else{
            printf("%d-%d%d%d-%d%d%d%d%d-%d",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9],check);
        }
        
    }   
return 0;
}
