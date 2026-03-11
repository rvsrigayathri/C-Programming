#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n>0 && (2^n==2) && n!=10 && n%3!=0){
        printf("Power of Two");
    }
    else{
        printf("Not Power of Two");
    }

    return 0;
}