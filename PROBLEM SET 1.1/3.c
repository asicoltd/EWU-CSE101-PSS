#include <stdio.h>

int main()
{   int x,n=0,y,i;
    printf("Enter a Decimal number:");
    scanf("%d",&x);
    i=x;
    do{
        y=x/8;
        n=x%8+n*10;
        x=y;
    }
    while(y>0);
    x=n+y;
    n=0;
    //Next part to xyz to zyx
    do{
    n=x%10+n*10;
    y=x/10;
    x=y;}
    while(y>0);
    n=n+y;
    printf("Octal form of %d is %d",i,n);

    return 0;
}