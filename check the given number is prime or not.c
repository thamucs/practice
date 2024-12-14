#include<stdio.h>
int prime(int a){
if(a<=1){
    return 0;
}
    for(int i=2;i*i<=a;i++){
    if(a%i==0){
        return 0;
    }
}
return 1;
}
int main()
{
    int num,b;
    printf("enter the number:");
    scanf("%d",&num);
    if(prime(num)){
        printf("%d it's an prime number",num);
    }
    else{
        printf("%d is an not prime number",num);
    }
    return 0;
}