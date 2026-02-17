
#include<stdio.h>
int main()
{
    int temp;
    scanf("%d",&temp);
    if(temp>=45){
        printf("Heat alert");
    }
    else if(temp>35 && temp<44){
        printf("Hot");
    }
    else if(temp>20 && temp<34){
        printf("Normal");
    }
    else{
        printf("Cold");
    }
    return 0;
}