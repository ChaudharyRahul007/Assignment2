/*5. Write a program to input a three-digit number and display the sum of the digits.*/
#include<stdio.h>
int main()
{
    int x,r,sum=0;
    printf("Enter three digit number :");
    scanf("%d",&x);
    while(x)
    {
        r=x%10;
        sum=sum+r;
        x=x/10;
    }
    printf(" sum of the digits = %d",sum);
 return 0;
}