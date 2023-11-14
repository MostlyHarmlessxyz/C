// // #include <stdio.h>

// // int main()
// // {
// //     char c;
// //     scanf("%c",&c);
// //     c = c-32;
// //     printf("%c\n",c);
// //     return 0;
// // }
//  #include <stdio.h>
//  #include <math.h>
// // int main()
// // {
// //     int i;
// //     int cnt = 0;
// //     int prime;
// //     int n =21;
// //     if (n % 2 != 0)
// //     {
// //         for ( i = 2; i <= sqrt(n); i++)
// //         {
// //             if (n % i == 0)
// //                 cnt++;
// //                 prime = i;
// //         }
// //     }else{
// //         for ( i = 2; i <= sqrt(n); i+=2)
// //         {
// //             if (n % i == 0)
// //                 cnt++;
// //                 prime = i;
// //         }
// //     }
// //     return 0;
// // }

// int main()
// {
//     int n = 4;
//     int i;
//     int cnt = 1;
//     int space;
//     for (i = 1; i < ((n+1)*n)*0.5 + 1; i++)
//     {
//         for (space = 1; space <=n - cnt; space++) // 输出2*(n-cnt)个空格
//         {
//             printf("  "); 
//         }
//         // i = 2
//         // cnt = 2
//         int m = i;
//         while (cnt>0)
//         {
//             printf("%02d",m);
//             cnt--;
//             m++;
//         }
//         cnt = i;
//         if (cnt + space == n+1)
//         {
//             printf("\n");
//         }
//         cnt++;
//     }
    
// }

#include <stdio.h>

int main()
{
    char a,b;
    a = '\'';
        printf("%d\n",a);
    
return 0;
}
