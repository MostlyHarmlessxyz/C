#include <stdio.h>

int main(void)
{
    // get number
    //long int number = get_long("Number: ");
    // get each_num
    long int number;
    scanf("%ld",&number);
    int array[100] = {0};
    int i = 1;
    int sum = 0;
    int c; // 每一位的数字
    do
    {
        c = number % 10;
        array[i] = c;
        if (i % 2 == 0)
        {
            sum += (c * 2) % 10 + (c * 2) / 10;
        }
        else
        {
            sum += c;
        }
        i++;
        number /= 10;
    }
    while (number > 0);
    int output = 0; // 0 = invalid / 1 = AMEX / 2 = MASTERCARD / 3 = VISA;
    int length = i - 1;
    if (length >= 13 && length <= 16 && sum % 10 == 0)
    {
        if (array[length] == 3 && length == 15)
        {
            output = 1;
        }
        else
        if ( array[length] == 5 && length == 16)
        {
            output = 2;
        }
        else
        if ( array[length] == 4 && (length == 13 || length == 16))
        {
            output = 3;
        }
        else
        {
            output =0;
        }
    }else
    {
        output = 0;
    }
    printf("%d %d %d\n",sum,output,length);
    switch (output)
    {
        case 0:
            printf("INVALID\n");
            break;
        case 1:
            printf("AMEX\n");
            break;
        case 2:
            printf("MASTERCARD\n");
            break;
        case 3:
            printf("VISA\n");
            break;
    }
}
