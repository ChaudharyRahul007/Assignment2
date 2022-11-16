/*2. Write a program to print a given number without its last digit.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number :");
    scanf("%d",&n);
    n=n/10;
    printf("Number without its last digit = %d",n);
    return 0;
}