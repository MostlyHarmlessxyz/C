#include <stdio.h>

int main()
{
    int noodles, orange, watermelon, vegetables;
    int total_calories;

    for (noodles = 1; noodles <= 5; noodles++)
    {
        for (orange = 0; orange <= 10; orange++)
        {
            for (watermelon = 0; watermelon <= 10; watermelon++)
            {
                for (vegetables = 0; vegetables <= 10; vegetables++)
                {
                    total_calories = noodles * 160 + orange * 40 + watermelon * 50 + vegetables * 80;

                    if (total_calories == 900 && noodles >= 1 && (orange >= 1 || watermelon>=1) && noodles + orange + watermelon + vegetables <= 10)
                    {
                        printf("%d %d %d %d\n", noodles, orange, watermelon, vegetables);
                    }
                }
            }
        }
    }

    return 0;
}
