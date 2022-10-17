#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head=NULL;
void input(){
    struct Node *tail=NULL;
    int class=1;
    while(class!=0){
        struct Node *newnode=malloc(sizeof(struct Node));
        int num;
        printf("Enter the element\n");
        scanf("%d",&num);
        newnode->data=num;
        if(head==NULL){
        head=tail=newnode;
        head->next=tail;}
        else{
            tail->next=newnode;
            tail=newnode;
            tail->next=head;
        }
        printf("If you want to stop the list press '0' otherwise press any number\n");
        scanf("%d",&class);
    }
}
void display(struct Node *p){
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
}
void insert(struct Node *p){
    int pos,n=1;
    while(p->next!=head){
        p=p->next;
        n++;
    }
    printf("Enter the position where you want to insert\n");
    scanf("%d",&pos);
if(pos<1||pos>n){
        return;
}
struct Node *newnode=malloc(sizeof(struct Node));
    int input;
    printf("Enter the input to insert in the list\n");
    scanf("%d",&input);
    newnode->data=input;
if(pos==1){
    if(head==NULL){
        head=newnode;
        head->next=newnode;
    }
    else{
        while(p->next!=head) p=p->next;
        p->next=newnode;
        newnode->next=head;
        head=newnode;
    }
    }
else{
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }
    newnode->next=p->next;
    p->next=newnode;
}
}
int deletionNum(struct Node *p){
    struct Node *q=head;
    int n=1,x;
    while(p->next!=head){
    p=p->next;
    n++;
    }
    int pos;
    printf("\nEnter the position where you want to delete the number\n");
    scanf("%d",&pos);
    if(pos<1 || pos>n)
    return -1;
    if(pos==1){
        while(p->next!=head) p=p->next;
        x=head->data;
        if(head==p){
            free(head);
            head=NULL;
        }
        else{
        p->next=head->next;
        free(head);
        head=p->next;
        return x;}
    }
    else{
        for(int i=0;i<pos;i++){
            q=p;
            p=p->next;
        }
        x=p->data;
         q->next=p->next;
         free(p);
       return x;
    }
}
void reverse(struct Node *p){
struct Node *q=NULL,*r=NULL;
do{r=q;
   q=p;
   p=p->next;
   q->next=r;
}while(p!=head);
 head=q;
}
int main(){
    input();
    display(head);
    printf("\n");
    //insert(head);
    // printf("Element which deleted in the list is %d",deletionNum(head));
    // printf("\n");
    reverse(head);
    display(head);
    return 0;
}