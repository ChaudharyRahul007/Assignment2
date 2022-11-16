/*4. Write a program to swap values of two int variables without using a third variable.*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y); 
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Swap values \n");
    printf("x = %d\n",x);
     printf("y = %d",y);
     return 0;

}