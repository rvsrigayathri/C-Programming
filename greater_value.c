#include <stdio.h>
int main()
{
    int a,b,c,d;
    
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("A value is :%d\n",a);
    printf("B value is :%d\n",b);
    printf("C value is :%d\n",c);
    printf("D value is :%d\n",d);
    if(a>b && a>c && a>d){
        printf("A is the greater value");
    }
    else if(b>a && b>c && b>d){
        printf("B is the greater value");
    }
    else if(c>a && c>b && c>d){
        printf("C is the greater value");
    }
    else if(d>a && d>b && d>c){
        printf("D is the greater value");
    }
    else{
        printf("Invalid statement and condition");
    }
    
}