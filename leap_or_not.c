#include <stdio.h>
int main() {
    int m,y,days;

    printf("Enter month (1-12): ");
    scanf("%d",&m);

    if(m==2) {
        printf("Enter year: ");
        scanf("%d",&y);

        if((y%4==0 && y%100!=0) || y%400==0)
            days = 29;
        else
            days = 28;

        printf("February - %d days", days);
    }
    else if(m==1) printf("January - 31 days");
    else if(m==3) printf("March - 31 days");
    else if(m==4) printf("April - 30 days");
    else if(m==5) printf("May - 31 days");
    else if(m==6) printf("June - 30 days");
    else if(m==7) printf("July - 31 days");
    else if(m==8) printf("August - 31 days");
    else if(m==9) printf("September - 30 days");
    else if(m==10) printf("October - 31 days");
    else if(m==11) printf("November - 30 days");
    else if(m==12) printf("December - 31 days");
    else printf("Invalid month");

    return 0;
}