#include <stdio.h>
#include <stdbool.h>

int num[40000+20];

int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int pos = 1;
    int read = 0;
    while (pos <= n*n)
    {
        scanf("%d",&a);
        for (int i = pos; i < pos + a; i++)
        {
            num[i] = read;
        }
        pos += a;
        read = 1 - read;
    }
    for (int i = 1, pos = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d",num[pos++]);
        printf("\n");
    }
    
    return 0;
}


































/*
#include <stdio.h>


int main()
{
    int N;
    scanf("%d", &N);
    int sum = 0;
    int num;
    int print[40000 = {0};
    int k = 0; // 0 or 1
    int j = 1; // number of rows
    while (sum != N * N)
    {
        scanf("%d", &num);
        for (int r = 1; r <= num; r++)
        {
            print[j][(sum % N + r) % N] = k;
            if (sum % N + r == N && j<N)
            {
                print[j][N] = k;
                j++;
            }
            if(sum % N + r == N && j == N){
                print[j][N] = k;
                break;
            }
        }
        sum += num;
        k = 1 - k; // Toggle between 0 and 1
    }
    for (int p = 1; p <= N; p++)
    {
        for (int q = 1; q <= N; q++)
        {
            printf("%d", print[p][q]);
        }
        printf("\n");
    }

    return 0;
}

 if (k == 1 && sum + num[i] <= j * N)
        {
            for (int r = 1; r <= num[i]; r++)
            {
                print[j][r + sum - (j - 1) * N] = 1;
            }
            if (sum + num[i] == j * N)
            {
                j++;
            }
            sum += num[i];
            k--;

        }
        else if (k == 1 && sum + num[i] > j * N) // 超了
        {
            for (int r = 1; r <= j * N - sum; r++)
            {
                print[j][r + sum - (j - 1) * N] = 1;
            }
            for (int r = 1; r <= num[i] + sum - j * N; r++)
            {
                print[j + 1][r] = 1;
            }
            sum += num[i];
            k--;
            j++;
        }
        else if (k == 0 && sum + num[i] <= j * N)
        {
            if (sum + num[i] == j * N)
            {
                j++;
            }
            sum += num[i];
            k++;
        }
        else if (k == 0 && sum + num[i] > j * N)
        {
            sum += num[i];
            k++;
            j++;
        }*/