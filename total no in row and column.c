#include<stdio.h>
int main(){
    int i,j,sum=0;
    int a[5][5]={{5,5,5,5,5},{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4}};
    printf("enter the row");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            sum+=a[i][j];
        }
            printf("\n%d",sum);
            sum=0;
    }
printf("\n enter the cloumn value");
for(j=0;j<5;j++){
    for(i=0;i<5;i++){
        sum+=a[i][j];
    }
        printf("\n%d",sum);
        sum=0;
}
}
