/*7. Write a program to find the position of first 1 in LSB*/
#include<stdio.h>
int main()
{
    int x,count=0,y;
    printf("Enter Any number :");
    scanf("%d",&x);
    while(x)
    {
      y=x&1;
    count++;
    if(y==1)
    {
        printf("%d",count);
        break;
    }
    x=x>>1;
    }
    
    return 0;
}