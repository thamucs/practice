#include<stdio.h>
float fahrenheit(float a){
    return (a*9/5)+32;
}
int main()
{
float b,c;
printf("enter the celsius:");
scanf("%d",&b);
c=fahrenheit(b);
printf("the fahrenheit is %.2f",c);
return 0;
}