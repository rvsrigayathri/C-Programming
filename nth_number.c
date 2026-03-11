#include <stdio.h>

int main()
{
    int n, count = 0, num = 2, i, prime;

    scanf("%d", &n);

    while(count < n)
    {
        prime = 1;

        for(i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
        {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    return 0;
}