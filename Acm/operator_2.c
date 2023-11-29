#include<stdio.h>
int main()
{
    int x;
    printf("enter values : ");
    scanf("%d",&x);

    printf("the addition of values are %d\n",x+=2);
    printf("the subtraction of values are %d\n",x-=2);
    printf("the division of values are %d\n",x/=2);
    printf("the multiplication of values are %d\n",x*=2);
    printf("the modulas of values are %d\n",x%=2);
    return 0;
}