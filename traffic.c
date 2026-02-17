#include<stdio.h>
int main()
{
    char traffic;
    scanf("%c",&traffic);
    switch (traffic){
        case 'R':{
            printf("Stop");
            break;
        }
        case 'Y':{
            printf("Ready");
            break;
        }
        case 'G':{
            printf("Go");
            break;
        }
        default:{
            printf("Invalid variable");
        }
        return 0;
    }
}

