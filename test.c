#include<stdio.h>
int rev(int a[0],int len){
    for(int i=len;i>=0;i--){
        printf("%d ",a[i]);
    }    
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    rev(a,n);
    printf("\n");
return 0;
}