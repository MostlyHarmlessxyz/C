#include <stdio.h>


int main()
{
    int n;
    int num[20][20] = {0};
    scanf("%d", &n);
    int x = 1, y = 1, cnt = 1;
    num[x][y] = cnt;
    while (cnt < n * n)
    {
        while (num[x][y + 1] == 0 && y + 1 <= n) //  go right
        {
            y++;
            cnt++;
            num[x][y] = cnt;
        }
        while (num[x + 1][y] == 0 && x + 1 <= n) // go down
        {
            x++;
            cnt++;
            num[x][y] = cnt;
        }
        while (num[x][y - 1] == 0 && y - 1 >= 1) // go left
        {
            y--;
            cnt++;
            
            num[x][y] = cnt;
        }
        while (num[x - 1][y] == 0 && x - 1 >= 1) // go up
        {
            x--;
            cnt++;
            num[x][y] = cnt;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            printf("%3d",num[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
