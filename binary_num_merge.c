#include<stdio.h>
int main(){
    int Arr1[5],Arr2[5],Array[10],i,t,s1,s2;
    printf("Array 1 Size:");
    scanf("%d",&s1);
    for(i=0;i<s1;i++)
    {
        printf("Arr1[%d]:",i);
        scanf("%d",&Arr1[i]);
        Array[i]=Arr1[i];
    }
    t=i;
    printf("Array 2 Size");
    scanf("%d",&s2);
    for(i=0;i<s2;i++)
    {
        printf("Arr2[%d] ",i);
        scanf("%d",&Arr2[i]);
        Array[t++]=Arr2[i];
    }
    printf("After Marge:\n");
    for(i=0;i<t;i++)
{
        printf("%d",Array[i]);
    }
}