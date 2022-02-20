#include<stdio.h>

int main()
{
    float F;
    printf("Enter the temperature\n");
    scanf("%f",&F);
    float C=0;
    C=(5/9)*(F-32);
    printf("Temperature in Celcius = %d",C);
    return 0;
}