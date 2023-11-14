/*
#include <stdio.h>

int main()
{
    int a,b,c;
    char p,q,r;
    int x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%c%c%c",&p,&q,&r); //A=65
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
    
    if (p==65) // A在开头
    {
        if (q>r) // prq A C B
            {
                printf("%d %d %d\n",z,x,y);
            }else{ // ABC
                printf("%d %d %d\n",z,y,x);
            }
    }else{
        if (q==65) // A 在中间
        {
            if (p>r) // q r p = B A C
            {
                printf("%d %d %d\n",y,z,x);
            }else{  // CAB
                printf("%d %d %d\n",x,z,y);
            }
        }else{ // r==65 A在最后
            if (p>q) //   r q p C B A
            {
                printf("%d %d %d\n",x,y,z);
            }else{  //  BCA
                printf("%d %d %d\n",y,x,z);
            }
        }
        
    }
    
    return 0;
}
*/
// 题解见下
#include <stdio.h>

//冒泡排序，从小到大
void BubbleSort(int nums[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int nums[3];
	char str[4];

	scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

	BubbleSort(nums, 3);

	scanf("%s", str);

	for (int i = 0; str[i] != 0; i++)
	{
		switch (str[i])
		{
		case 'A':
			printf("%d ", nums[0]);
			break;
		case 'B':
			printf("%d ", nums[1]);
			break;
		case 'C':
			printf("%d ", nums[2]);
			break;
		}
	}
	printf("\n");

	return 0;
}