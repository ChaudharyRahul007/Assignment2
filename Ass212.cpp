/* 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD.
*/
#include<stdio.h>
int main()
{
    int x;
    float y;
    printf("Enter value to convert US Dollar :");
    scanf("%d",&x);
    y=x/76.23;
    printf("%f",y);
    return 0;
}