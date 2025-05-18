#include<stdio.h>
#include<stdlib.h>
int calc(char str[],char str1[],char op){
    int a=atoi(str);
    int b=atoi(str1);
    switch (op){
        case '+':
        return a+b;
        break;
        case'-':
        return a-b;
        break;
        case '*':
        return a*b;
        case '/':
        break;
        return a/b;
        case '^':
        return a*a;
        break;
        default:
        printf("invalid operator");

    }
}
    int main(){
        char str[100],str1[100];
        char op;
        int result;
        printf("enter the operator:\n");
        scanf("%c",&op);
        printf("enter the two numbers:");
        scanf("%s%s",str,str1);
      
        calc(str,str1,op);
        result=calc(str,str1,op);
        printf("the answer is %d",calc(str,str1,op));

        return 0;
    }

