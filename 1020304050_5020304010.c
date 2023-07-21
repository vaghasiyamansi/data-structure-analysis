#include<stdio.h>
int main(){
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter value a[%d]:",i);
        scanf("%d",&a[i]);
    }
   
    
    printf("\t%d\t%d\t%d\t%d\t%d",a[4],a[1],a[2],a[3],a[0]);
}