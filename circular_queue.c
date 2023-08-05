#include<stdio.h>
#define n 5
int f=-1,r=-1,ch,val;
int a[n];
int display()
{
          int i=f;
          if(f<0)
               printf("\nqueue is empty....");
          else{
               while(i<r)
               {
                     printf("%d  ",a[i]);
                     i=(i+1)%n;
               }
                     printf("%d",a[i]);
              }
}
int insert_end(int val)
{
         if(r<0)
         {
                 f=r=0;
                 a[r]=val;
         }
         else if((r+1)%n==f)
                printf("queue is full....");
         else{
                r=(r+1)%n;
                a[r]=val;
         }       
}
int first_delete()
{
    if (f<0)
    {
        printf("queue is empty....\n");
    }
    else if (f==r)
    {
        f=r= -1;
    }
    else
    {
        f = (f+1) % n;
    }
}
int main()
{
do{
        printf("\nPress 1 if Insert end queue\n");
        printf("Press 2 if first Delete queue\n");
       
        printf("press 9 if display array");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert_end();
                break;
            case 2:
               first_delete();
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
        
 
