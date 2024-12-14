#include<stdio.h>
int main()
{
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("it's an even number");
    }
    else{
        printf("it's an odd number");
    }
    return 0;
}