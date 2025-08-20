#include<stdio.h>
#include<stdlib.h>
 struct node
 {
   int info;
   struct node *prev;
   struct node *next;
   };
   struct node *start = NULL;
   struct node *last = NULL;
   
   void create_dll()
   {
   int n,i,data;
    printf("Entr no.of element:");
    scanf("%d",&n);
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    start = newnode;
    if (start == NULL)
     {
      printf("The list is empty");
      }
      else
      { 
       printf("Enter data for firstnode");
       scanf("%d",&data);
       start -> info = data;
       start -> prev = NULL;
       start -> next = NULL;
       last = start;
    for (i=2;i<=n;i++)
     {
     newnode = malloc(sizeof(struct node));
    printf("Enter data for next node :");
    scanf("%d",&data);
    newnode -> info = data;
    newnode -> prev = last;
    newnode -> next = NULL;
    last -> next = newnode;
    last = newnode;
    }
    }
    }
    
    void display()
      {
       struct node *temp;
       temp = start;
       while(temp!=NULL)
       {
        printf("%d  ",temp->info);
        temp = temp -> next;
       }
       }
       void insfirst()
       {
        int data ;
        struct node *new;
        new = malloc (sizeof(struct node));
        printf("Enter the data to be inserted : ");
        scanf("%d", &data);
        new -> info = data;
        new -> prev = NULL;
        new -> next = start;
        start -> prev = new;
        start = new;
        }
        
        void inslast()
       {
       int data;
        struct node *new;
        new = malloc (sizeof(struct node));
        printf("Enter the data to be inserted : ");
        scanf("%d", &data);
        new -> info = data;
        new -> prev = last;
        new -> next = NULL;
        last -> next = new;
        last = new;
        }
        
        void insmid()
        {
         int data, pos, i=1;
         struct node *new,*temp;
         new =  malloc(sizeof(struct node));
        printf("Enter the data to be inserted : ");
        scanf("%d",&data);
        printf("Enter the position : ");
        scanf("%d",&pos);
        new -> info = data;
        temp = start;
        while (i<pos)
        {
         temp = temp -> next;
         i++;
         }
         temp -> prev = temp;
         new -> next = temp -> next;
         (temp -> next) -> prev = new;
         temp -> next = new;
         }
         
         void deletefirst()
       {
        struct node *temp;
        if (start == NULL)
        printf("The list is empty");
        else 
         {
          temp = start;
          start = start -> next;
          start -> prev = NULL;
          temp -> next = NULL;
         free(temp);
         }
         }
         
         void deletend()
      {
       struct node *temp;
        temp = last;
        last = last -> prev;
        temp -> prev = NULL;
        free (temp);
        last -> next = NULL;
          }
           
           void deleteany()
        { 
         struct node *temp,*ptr;
         ptr =  malloc(sizeof(struct node));
        if (start == NULL)
        printf("The list is empty");
        else 
        {
         int i=1,pos;
         printf("Enter Position ");
         scanf ("%d",&pos);
         temp = start;
         while (i<pos)
         {
           temp = temp -> next;
           i++;
          }
          (temp -> prev) -> next = temp -> next;
          (temp -> next) -> prev = temp -> prev;
          free (temp);
          }
         }
        
       int main()
        {
        int choice;
       while(1){
       printf("\n MENU...............................................");
       printf("\n Enter 1 to creat the list");
       printf("\n Enter 2 to insert first position");
       printf("\n Enter 3 to insert last position");
       printf("\n Enter 4 to insert any(mid) position");
       printf("\n Enter 5 to delete first position");
       printf("\n Enter 6 to delete last position");
       printf("\n Enter 7 to delete any(mid) position");
       printf("\n Enter 8 display list");
       printf("\n Enter 9 exit");
       
       
       
       
       printf("\n Enter your choice");
       scanf("%d",&choice);
       switch (choice)
        {
          case 1: create_dll();
                 break;
          case 2: insfirst();
                 break;
          case 3: inslast();
                 break;  
          case 4: insmid();
                 break;
          case 5: deletefirst();
                 break; 
          case 6: deletend();
                 break;               
          case 7: deleteany();
                 break;                    
          case 8: display();
                  break;
           case 9:exit(1);
           default : printf("Invalid choice");
           }
     }
  }       
         
