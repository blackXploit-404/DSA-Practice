#include<stdio.h>
#include<stdlib.h>

int main(){
 int i,item;
 int arr[4]={93,45,67,89};

 printf("Enter a serach item");
 scanf("%d",&item);

 for(i=0;i<4;i++){
 if(arr[i]==item){
 printf("Item found ! at %d",i);
 exit(0);
}
}
printf("Item not found");
return 0;
}



