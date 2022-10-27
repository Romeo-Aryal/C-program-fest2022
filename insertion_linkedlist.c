 #include<stdio.h>
 #include<stdlib.h>
 struct node{
     int data;
     struct node *next;
 };
 void list_traversal(struct node *ptr){
     while(ptr!=NULL){
         printf("Element :%d\n",ptr->data);
         ptr=ptr->next;
     }
 }
 struct node *insertion_atstart(struct node *head,int data){
     struct node *ptr=(struct node *)malloc(sizeof(struct node));
     ptr->data=data;
     ptr->next=head;
     return ptr;
 }
 struct node *insertion_atindex(struct node *head,int data,int index){
     struct node *ptr=(struct node *)malloc(sizeof(struct node));
     struct node *p=head;
     int i=0;
     while(i!=index-1){
         p=p->next;
         i++;
     }
     ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
     return head;
 }
 struct node *insertion_atend(struct node *head,int data){
     struct node *ptr=(struct node *)malloc(sizeof(struct node));
     ptr->data=data;
     struct node *p=head;
     while(p->next!=NULL){
         p=p->next;
     }
     p->next=ptr;
     ptr->next=NULL;
     return head;
 }
 struct node *insertion_afternode(struct node *head,int data){
     struct node *ptr=(struct node *)malloc(sizeof(struct node));
     
 }
 int main(){
     struct node *head;
     struct node *first;
     struct node *second;
     struct node *third;
     struct node *fourth;
     head=(struct node *)malloc(sizeof(struct node));
     first=(struct node *)malloc(sizeof(struct node));
     second=(struct node *)malloc(sizeof(struct node));
     third=(struct node *)malloc(sizeof(struct node));
     fourth=(struct node *)malloc(sizeof(struct node));
     head->data=15;
     head->next=first;
     first->data=171;
     first->next=second;
     second->data=100;
     second->next=third;
     third->data=190;
     third->next=fourth;
     fourth->data=50;
     fourth->next=NULL;
     //list_traversal(head);
     //head=insertion_atstart(head,90);
     //head=insertion_atindex(head,87,3);
     head=insertion_atend(head,60);
     list_traversal(head);
 }
