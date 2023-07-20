#include<stdio.h>
int main(){
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter value a[%d]:",i);
        scanf("%d",&a[i]);
    }
   
    for(i=1;i<4;i++){
        printf("%d",a[i]);
        printf("\t");
    }
    printf("%d \t %d",a[4],a[0]);
}