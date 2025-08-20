#include<stdio.h>
#include<stdlib.h>


 struct node{
 int info ;
 struct node *next;
 };

 struct node *start=NULL;
 
       void createlist(){
  if(start==NULL){
  int n,i,data ;
  printf("enter no. of nodes ");
  scanf("%d",&n);
  struct node *newnode ;
  struct node *temp;
  newnode=malloc(sizeof(struct node));
  start = newnode;
  temp = start;
  printf("enter the data for first node ");
  scanf("%d",&data);
  newnode->info=data;
  for(i=1;i<n;i++){
  newnode=malloc(sizeof(struct node));
  temp->next = newnode;
  printf("enter data for next node : ");
  scanf("%d",&data);
  newnode->info=data;
  temp = temp->next;
  }
  temp ->next = NULL;
  }
  }
       void display(){
       struct node *temp;
       temp=start;
       while(temp!=NULL){
       printf("%d ",temp->info);
       temp = temp->next;
       }
     }
     
             //                          INSERT A NODE AT THE BEGINNING
             
             void insfirst()
            {
            struct node *new;
            int data;
            new=malloc(sizeof(struct node));
            printf("enter the data for new node :");
            scanf("%d",&data);
            new->info=data;
            new->next=start;
            start = new;
            }
        
        //                                          INSERT AT THE END 
        
        
        void inslast(){
        struct node *new,*temp;
        int data;
        new=malloc(sizeof(struct node));
        printf("enter the data for new node : ");
        scanf("%d",&data);
        new->info=data;
        temp = start;
        while(temp->next!=NULL){
        temp = temp->next;
        }
        temp->next=new;
        new->next=NULL;
        }
        
                   //                               ANY POSITION
                   
                   
                  void insmiddle()
                  {
                  struct node *new, *temp;
                  int data,pos,i=1;
                  new=malloc(sizeof(struct node));
                  printf("enter the data for new node : ");
                  scanf("%d",&data);
                  printf("enter position : ");
                  scanf("%d",&pos);
                  new->info = data;
                  temp=start;
                  while(i<pos-1){
                  temp=temp->next;
                  i++;
                  }
                  new->next=temp->next;
                  temp->next = new ;
                  }
                  
                  
                  //                              DELETE AT THE BEGINNING
                  
                void deletefirst()
                {
                struct node *temp;
                if(start==NULL)
                printf("\nthe list is empty");
                else{
                temp=start;
                start=start->next;
                free(temp);
                }
               } 
            
                  //                               DELETE AT THE END 
                  
                  void deleteend(){
                   struct node *temp ,*last;
                   if(start==NULL)
                   printf("the list is empty");
                   else
                   {
                   temp=start;
                   while(temp->next!=NULL)
                   {
                    last=temp;
                    temp=temp->next;
                    }
                    free(temp);
                    last->next = NULL;
                  
                  }
                 } 
                
        
        
        //                               DELETE AT ANY POSITION
        
        void deleteany(){
        struct node *temp,*ptr;
        int i=1,pos;
        if(start==NULL)
        printf("the list is empty");
        
        else
        {
        printf("enter position : ");
        scanf("%d",&pos);
        temp=start;
        while(i<pos-1)
        {
        temp = temp->next;
        i++;
        }
        ptr =temp->next;
        temp->next=ptr->next;
        free(ptr);
        }
       }
        
        
        
     int main()
     {
     int choice;
    printf("====================================\n");
    printf("     LINKED LIST OPERATIONS TOOL    \n");
    printf("====================================\n");

     while(1){
     printf("\nIN MENU");
     printf("\n enter 1 to create the list");
     printf("\n enter 2 to insert at first position");
     printf("\n enter 3 to insert at end");
     printf("\n enter 4 to insert at middle");
     printf("\n enter 5 to delete at the beginning ");             
     printf("\n enter 6 to delete at the end ");                
     printf("\n enter 7 to delete at any position ");                
      printf("\n enter 8 to display the list ");
      printf("\n enter 9 to exit");
      printf("\n enter your choice : ");
      scanf("%d",&choice);
      switch(choice){
      case 1 : createlist();
               break;
      case 2 : insfirst();
               break;
      case 3 : inslast();
               break;        
      case 4 : insmiddle();
               break;
      case 5 : deletefirst();
               break;
      case 6 : deleteend();
               break;
      case 7 : deleteany();
               break;         
      case 8 : display();
               break;
       case 9 :exit(1);
       default : printf("invalid choice");
       }
        }
        return 0;
         }
       
      
      
      
      
     
