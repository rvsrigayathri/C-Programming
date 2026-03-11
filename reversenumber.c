#include <stdio.h>

int main()
{
    int num, rev = 0, rem, sign = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        sign = -1;     // store the sign
        num = -num;    // make number positive for reversing
    }

    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    rev = rev * sign;  // restore the original sign

    printf("Reversed number: %d", rev);

    return 0;
}