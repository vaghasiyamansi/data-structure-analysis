#include<stdio.h>
int main()
{
      int n=5;
      int a[5],b[5],i,merge[10];
      for(i=0; i<5; i++)
      {
            printf("enter the value of a[%d]:",i);
            scanf("%d",&a[i]);
      }
      for(i=0; i<5; i++)
      {
            printf("enter the value of b[%d]:",i);
            scanf("%d",&b[i]);
      }
      for(i=0; i<n; i++)
      {
             merge[i]=a[i];
             merge[i+n]=b[i];
      }
      printf("\nmerge array:");
      for(i=0; i<10; i++)
      {
             printf("%d",merge[i]);
      }

}