#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
}*head;

int main()
{
   create_link_list();
   transverse_linkedlist();
}
 create_link_list()
 {
   struct node *newnode,*temp;
       head=malloc(sizeof(struct node));
       if(head==NULL)
   {
       printf("YOUR linked list is empty\n");
   }
   else
   {

printf("Enter your data\n");
scanf("%d",&head->data);
head->next=NULL;
temp=head;
for(int i=2;i<=3;i++)
{
  newnode=malloc(sizeof(struct node));
  printf("Enter your data\n");
  scanf("%d",&newnode->data);
   newnode->next = NULL;
  temp->next=newnode;
  temp=temp->next;
}
   }

 }
transverse_linkedlist()
{
struct node *temp;
temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
}

}
