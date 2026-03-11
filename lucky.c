#include <stdio.h>

int main(){
    int num;

    scanf("%d",&num);

    if(num % 3 == 0 && num % 5 == 0){
        printf("Super Lucky");
    }
    else if(num % 3 == 0){
        printf("Lucky");
    }
    else if(num % 5 == 0){
        printf("Very Lucky");
    }
    else{
        printf("Unlucky");
    }

    return 0;
}