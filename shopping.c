
#include<stdio.h>
int main()
{
    int amount,payable;
    scanf("%d",&amount);
    if(amount>=5000 && amount<10000){
        payable=amount-(amount*0.1);
        printf("Payable:%d\n",payable);
    }
    else if(amount>=10000){
        payable=amount-(amount*0.2);
        printf("Payable:%d\n",payable);
    }
    else{
        payable=amount;
        printf("Payable:%d\n""No discount",payable);
    }
    return 0;
}