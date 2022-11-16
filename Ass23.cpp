/*3. Write a program to swap values of two int variables*/
#include<stdio.h>
int main()
{
    int x,y,n=0;
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y); 
    n=x;
    x=y;
    y=n;
    printf("Swap values \n");
    printf("x = %d\n",x);
     printf("y = %d",y);
     return 0;

}