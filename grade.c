
#include<stdio.h>
int main()
{
    int grade;
    scanf("%d",&grade);
    if(grade>=90){
        printf("O");
    }
    else if(grade>80 && grade<89){                
        printf("A");
    }
    else if(grade>70 && grade<79){
        printf("B");
    }
    else if(grade>60 && grade<69){
        printf("C");
    }
    else if(grade<60){
        printf("Fail");
    }
    else{
        printf("Invalid value");
    }
    return 0;
}