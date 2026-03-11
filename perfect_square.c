#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int root;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Invalid");
    }
    else
    {
        root = sqrt(num);

        if(root * root == num)
            printf("Perfect Square");
        else
            printf("Not Perfect Square");
    }

    return 0;
}