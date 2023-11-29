#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of X : ");
    scanf("%d ",&x);

    if(x % 2==0)
    {
        printf("even");
    }

    else
    {
        printf("odd");
    }

    return 0;
}