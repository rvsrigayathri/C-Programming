#include <stdio.h>

int main()
{
    int n, i, j, num;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        num = i % 2;   // decides starting value (1 or 0)

        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num = 1 - num;   // alternate between 1 and 0
        }

        printf("\n");
    }

    return 0;
}