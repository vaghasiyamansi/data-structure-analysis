#include<stdio.h>
#define n 5
int a[n],top=-1,ch,i;
void display()
{
             int i;
             for(i=0; i<=top; i++)
                   printf("%d",a[i]);
                   printf("\n");
}
int insert()
{
        int val;
        if(top>=n-1)
              printf("arrey is full.....\n");
        else{
              printf("enter valur is insert:");
              scanf("%d",&val);
              top++;
              a[top]=val;
        }      
}
int delete()
{
        if(top<0)
              printf("arrey is empty.....\n");
        else{
              top--;
            
        }      
}
void first_insert()
{
        int val;
         printf("enter valur is insert:");
         scanf("%d",&val);
        if(top>=n-1)
              printf("array is full.....\n");
        else if(top<0){
               top++;
               a[top]=val;
        }       
        else{
            top++;
            for(i=top; i>=0; i--){
                   a[i]=a[i-1];
                }
                a[0]=val;
            
        }      
}
void first_delete()
{
        int val;
        if(top<=0)
             printf("array is empty.....\n");         
        else{
             int i;
             for(i=0; i<top; i++){
                    a[i]=a[i+1];
             }
        top--; 
        }
}                
int main()
{
do{
        printf("\nPress 1 if Insert Array\n");
        printf("Press 2 if Delete Array\n");
        printf("Press 3 if first array insert\n");
        printf("press 4 if first array delete\n");
        printf("press 9 if display array");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                first_insert();
                break;
            case 4:
                first_delete();
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
        