#include<stdio.h>
int main()
{
    int i,n;
    printf("eneter the number until you have to print natural number: ");
    scanf("%d",&n);

    int sum=0;
    
    printf("0");

    for (i=1;i<n;i++)
    {
        printf(" + %d",i);
        sum = sum + i;
    }

    printf(" = %d",sum);
    return 0;
}