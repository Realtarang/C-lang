#include<stdio.h>
int main()
{
    int x,y;
    printf("enter values : ");
    scanf("%d %d",&x,&y);

    printf("%d\n",x==y);
    printf("%d\n",x>y);
    printf("%d\n",x<y);
    printf("%d\n",x<=y);
    printf("%d\n",x>=y);
    printf("%d\n",x>y&&x<y);
    printf("%d\n",x<y||x>y);
    printf("%d\n",!x<y);
    
    return 0;
}