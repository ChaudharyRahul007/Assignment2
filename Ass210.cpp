/*10. Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)
*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter any number :");
    scanf("%d",&x);
    x=x/10;
    y=x*10;
    printf("x=%d",y);
    return 0;
}