#include<stdio.h>
int main()
{
    int minutes,hours,min;
    printf("Enter the number of minutes: ");
    scanf("%d",&minutes);
    
    hours=minutes/60;
    min=minutes - hours*60;
    printf("\nThe equivalent time in hours minutes is %dh %dm",hours,min);
    return 0;

}