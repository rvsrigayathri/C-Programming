#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int found=0;

    for(int j=0;j<n;j++)
    {
        int leftside=0;
        int rightside=0;

        for(int k=0;k<j;k++)
        {
            leftside = leftside + arr[k];
        }

        for(int l=j+1;l<n;l++)
        {
            rightside = rightside + arr[l];
        }

        if(leftside == rightside)
        {
            printf("%d",j);
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("-1");
    }

    return 0;
}