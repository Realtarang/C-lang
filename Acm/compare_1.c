#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the x and y : ");
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        printf("%d is greater",x);
    }

    else
    {
        printf("%d is greater",y);
    }

    return 0;
}