/*8. Write a program to check whether the given number is even or odd using a bitwise operator.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Any number :");
    scanf("%d",&x);
    if(x&1)
    {
        printf("given number %d is odd :",x);
    }
    else
    {
        printf("given number %d is even :",x);
    }
    return 0;
}