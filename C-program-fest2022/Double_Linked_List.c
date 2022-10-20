#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;

void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data:");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=temp;
        temp->left=p;
    }
}

void display()
{
    struct node *temp=root;
    if(temp==NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("\nThe node after creation is:\n");
        while(temp!=NULL)
           {
              printf("%d\t",temp->data);
               temp=temp->right;
           }

           printf("\n\n");
       }
}

int length()
{
    struct node *temp=root;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->right;
    }
     printf("Nodes in the list = %d",count);
     return count;
}

void add_at_begin()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->right=root;
        root->left=temp;
        root=temp;
        display();
    }
}

void add_at_end()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    if(root==NULL)
    {
        root=newnode;
        newnode->right=NULL;
        newnode->left=NULL;
    }
    else
    {
        temp=root;
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        temp->right=newnode;
        newnode->left=temp;
        newnode->right=NULL;
    }
    printf("Node inserted at last\n");
    display();
}

int add_at_location()
{
  struct node*temp,*p;
  
  int loc,len,i=1;
  printf("Enter the location:");
  scanf("%d",&loc);
  len=length();
  if(loc>len)
  {
    printf("Invalid location\n");
    printf("Currently list is having %d nodes",len);
  }
  else
  {
    p=root;
    while(i<loc)
    {
      p=p->right;
      i++;
    }
    
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the node you want to insert:");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    temp->right=p->right;
    p->right->left=p;
    p->right=temp;
    display();
  }
}

void delete_from_begin()
{
    struct node *temp=root;
    root=root->right;
    temp->right=NULL;
    root->left=NULL;
    display();
    length();
}

void delete_from_end()
{
  struct node *tail,*temp;
  temp=root;
  if(temp==NULL)
    printf("The List is empty");
  else
  {
    while(temp->right!=NULL)
    {
      tail=temp;
      temp=temp->right;
    }
    tail->right=NULL;
    display();
  }
}

void delete_from_location()
{
    struct node *temp=root;

    int len,loc,i;
    printf("Enter the location to delete:");
    scanf("%d",&loc);
   if(loc>length())
    {
        printf("Invalid location\n");
    }
    else
    {
        struct node *temp;
        temp=root;
        for(i=0;i<loc-1;i++)
        {
            temp=temp->right;
        }
        temp->right=temp->right->right;
        temp->right->left=temp;
        display();
    }
}
void search()
{
    struct node *temp=root;
    int key,i=1,flag=0;
    printf("Enter the element you want to search:");
    scanf("%d",&key);
    temp=root;

    while(temp!=NULL)
    {
        if(key==temp->data)
        {
        	flag=1;
			break;
        }
        i++;
        temp=temp->right;
    }
    if(flag==1)
        printf("\n%d is found at location %d \n\n",key,i);
    else
        printf("\n%d is not found\n\n",key);
}
void sort()
{
    struct node*temp;
    temp=root;
    struct node *temp1;
    int tem;
    while(temp!=NULL)
        {
            temp1=temp->right;
            while(temp1!=NULL)
            {
            if(temp->data > temp1->data)
      {
         tem =temp->data;
         temp->data=temp1->data;
         temp1->data=tem;
    }
    temp1=temp1->right;
    }
    temp=temp->right;
    }
    printf("The list is sorted\n");

    display();
}
int main()
{
	printf("\n1.Append\n");
    printf("2.Display\n");
    printf("3.Length\n");
    printf("4.Add a node at the beginning\n");
    printf("5.Add a node at the end\n");
    printf("6.Add a node at a specified location\n");
    printf("7.Delete from the beginning\n");
    printf("8.Delete from the end\n");
    printf("9.Delete from a specified location\n");
    printf("10.Search an element\n");
    printf("11.Sort the elements\n");
    printf("12.Exit\n");
    while(1)
    {
        int ch;
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
				append();
                break;
            case 2:
				display();
                break;
            case 3:
				length();
                break;
            case 4:
				add_at_begin();
                break;
            case 5:
				add_at_end();
                break;
            case 6:
				add_at_location();
                break;
            case 7:
				delete_from_begin();
                break;
            case 8:
				delete_from_end();
                break;
            case 9:
				delete_from_location();
                break;
            case 10:
				search();
                break;
            case 11:
				sort();
                break;
            case 12:
				exit(1);
            default:
				printf("Invalid input \n\n");
        }
    }
}
