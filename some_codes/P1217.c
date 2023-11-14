#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int size(int a)
{
    a=abs(a);
    return log10(a)+1;
}

int isPalindrome(int num) {
    if (num < 0 || (num % 10 == 0 && num != 0)) {
        return 0; // 负数和以0结尾的数字不是回文数
    }

    int reversedNum = 0;

    while (num > reversedNum) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // 当数字长度为奇数时，去掉中间的数字后，反转后的数字应该与去掉中间数字的数字相等
    // 当数字长度为偶数时，反转后的数字应该与原数字相等
    return num == reversedNum || num == reversedNum / 10;
}

int isPrime(int n)
{
    int i;
    int cnt = 0;
    int m = 0;
    if (n % 2 != 0)
    {
        for ( i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0){
                cnt++;
                break;  
            }
        }
    }else{
        for ( i = 2; i <= sqrt(n); i+=2)
        {
            if (n % i == 0){
                cnt++;
                break;
            }
        }
    }
    if (cnt == 0)
    {
        m = 1;
    }
    return m;
}

int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    int i;
    for (i = a; i < b+1; i++)
    {
        // if(i==9989900) //如果到了这个数，就break 
		// 	break;
        if (isPalindrome(i)+isPrime(i)==2)
        {
            printf("%d\n",i);
        }
    } 
    return 0;
}
