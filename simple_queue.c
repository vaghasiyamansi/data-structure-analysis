#include<stdio.h>
#define n 5
int f=-1,r=-1,ch,val;
int a[n];
int display()
{
        if(f<0)
        {
              printf("\nqueue is empty....");
        }      
           else{  
           for(int i=f; i<=r; i++)
           {
                  printf("%d",a[i]);
           }
           }
           printf("\n");
}
int insertend()
{
          printf("enter value to insert:");
          scanf("%d",&val);
          if(r>=n-1)
                printf("queue is full\n");
          else if(r<0)
          {
                 f=r=0;
                 a[r]=val;
          }  
          else{
                 r++;
                 a[r]=val;
          }    
}
int delete()
{
          int val;
          if(f==r)
          {
                  printf("queue is empty");
          }
          else if(f<0){
                  f=r=-1;
                  a[f]=val;
          }
          else{
                  f++;
          }
}
int main()
{
do{
        printf("\nPress 1 if Insert queue\n");
        printf("Press 2 if Delete queue\n");
        printf("press 9 if display queue");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insertend();
                break;
            case 2:
                delete();
                break;
            case 9:
                display();
                break;
            default:
                printf ("\n\t Please Enter a Valid Choice(1/2/9)");
                break;   
        }
    }while(ch!=0);
}
