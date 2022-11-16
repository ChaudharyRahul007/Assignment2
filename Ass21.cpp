/*1. Write a program to print unit digit of a given number*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    if(n)
    {
        n=n%10;
        printf("Unit Digit is = %d",n);
    }
    return 0;
}