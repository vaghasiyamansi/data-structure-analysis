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
int insert_end()
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
int delete_End(){
    if (f == r) 
    {
        printf("queue is empty...\n");
    } 
    else if (f < 0)
    {
         f=r= -1;
    } 
    else
    {
        r--;
    }
}
int delete_first()
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
int first_Insert(){
    int val,i;
         printf("enter value to insert:");
         scanf("%d",&val);
    
         if(f<0)
         {
                 f=r=0;
                 a[f]=val;
         }
         else if(f==0)
                 printf("\nnot added to this position");
         else{
                 f--;
                 a[f]=val;
         }
}         
int main()
{
do{
        printf("\nPress 1 if Insert_end queue\n");
        printf("Press 2 if Delete_first queue\n");
        printf("\nPress 3 if Insert_first queue\n");
        printf("\nPress 4 if delete_end queue\n");
        printf("press 9 if display queue");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert_end();
                break;
            case 2:
                delete_first();
                break;
            case 3:
                first_Insert();
                break;
            case 4:
                delete_End();
                break;        
            case 9:
                display();
                break;
            default:
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/9)");
                break;   
        }
    }while(ch!=0);
}
