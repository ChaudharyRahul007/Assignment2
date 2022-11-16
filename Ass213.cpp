/*13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right*/
#include<stdio.h>
int main()
{
    int x,y,i,rem,count=0,a=1,b=1,result=0;
    printf("Enter any number :");
    scanf("%d",&x);
    printf("Enter you want to rotate Number :");
    scanf("%d",&y);
    int num=x;
    while(x)
    {
        rem=x%10;
        count++;
        x=x/10;
    }
    y=y%count;
    if(y<0)
    {
        y=count+y;
    }
    for(i=1;i<=count;i++)
    {
        if(i<=y)
        {
            a=a*10;
        }
        else{
            b=b*10;
        }
    }
        x=num;
        rem=x%a;
        rem=rem*b;
        x=x/a;
        result=rem+x;
        printf("%d",result);
        return 0;
}