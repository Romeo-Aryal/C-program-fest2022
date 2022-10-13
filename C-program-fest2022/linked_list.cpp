#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
struct Node{ 
int data; 
struct Node * next; 
}; 
struct Node * tail; 
int count_nodes(){ 
	if(tail == 0){ 
		return 0; 
	} 
	else{ 
		int count = 0; 
		struct Node *temp = tail->next; 
		while(temp!=tail){ 
			temp= temp->next; 
			count += 1; 
		} 
		return count+1; 
	}
}
void print(){ 
	if(tail == NULL){ 
		printf("the list is empty\n"); 
		return; 
	} 
	struct Node * temp = tail->next; 
	while(temp!=tail){ 
		printf("%d ",temp->data); 
		temp = temp->next; 
	} 
	printf("%d ",temp->data); 
	printf("\n"); 
} 
void insert_first(int data){ 
	struct Node * temp = (struct Node *)malloc(sizeof(struct Node)); 
	temp->data = data; 
	temp->next = NULL; 
	if(tail == NULL){ 
		tail = temp; 
		tail->next = temp; 
		return; 
	} 
	temp->next = tail->next; 
	tail->next = temp; 
} 
void insert_end(int data){ 
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node)); 
	temp->data = data; 
	temp->next = NULL; 
	if(tail==NULL){ 
		tail = temp; 
		tail->next = temp; 
		return; 
	} 
	temp->next = tail->next; 
	tail->next = temp; 
	tail = temp; 
} 
void insert(int data, int n){ 
	if(n==1){ 
		insert_first(data); 
		return; 
	} 
	else if(n == count_nodes()+1){ 
		insert_end(data); 
		return; 
	} 
	struct Node * temp = (struct Node *)malloc(sizeof(struct Node)); 
	temp->data = data; 
	temp->next = NULL;  
	struct Node * temp1 = tail->next; 
	for(int i = 0;i<n-2;i++){ 
		temp1 = temp1->next;  
	} 
	temp->next = temp1->next; 
	temp1->next = temp; 
} 
void reverse(){ 
	struct Node *prev,*current,*next; 
	current = tail->next; 
	prev = NULL; 
	next = current->next; 
	while(current!=tail){ 
		prev = current; 
		current = next; 
		next = current->next; 
		current->next = prev; 
	} 
	next->next = tail; 
	tail = next; 
} 
void Delete_begining(){ 
	if(tail == NULL){ 
		printf("the list is empty\n"); 
		return; 
	} 
	if(tail->next == tail){ 
		struct Node * temp = tail->next; 
		tail = NULL; 
		free(temp); 
		return; 
	} 
	struct Node *temp = tail->next; 
	tail->next = temp->next; 
	free(temp); 
} 
void Delete_end(){ 
	if(tail==NULL){ 
		printf("The list is empty\n"); 
		return; 
	} 
	if(tail->next == tail){ 
		struct Node * temp = tail; 
		tail = NULL; 
		free(temp); 
		return; 
	} 
	struct Node * temp = tail->next,*temp1=tail; 
	while(temp->next!=tail){ 
		temp=temp->next; 
	} 
	temp->next = tail->next; 
	tail = temp; 
	free(temp1); 
} 

void Delete(int n){ 
	if(n==1){ 
		Delete_begining(); 
		return; 
	} 
	if(n==count_nodes()){ 
		Delete_end(); 
		return;
	} 
	struct Node *temp = tail->next; 
	struct Node *temp2; 
	for(int i=0;i<n-2;i++){ 
		temp = temp->next; 
	}	 
	temp2 = temp->next; 
	temp->next = temp2->next; 
	free(temp2); 
} 
int main(){
	tail = NULL; 
	char choice; 
	bool exit = false; 
	while(!exit){ 
		printf("\t options \n");
		printf("------------------------------ \n");
		printf("a-insert at begining\n");
		printf("b-insert at the end\n"); 
		printf("c-insert to n position of the list \n"); 
		printf("d-delete first node\n"); 
		printf("e-delete the end node\n"); 
		printf("f-delete from n position of the list \n"); 
		printf("g-reverse the list \n"); 
		printf("h-count the number of nodes in the list\n"); 
		printf("i-print the list \n"); 
		printf("x-exit\n"); 
		scanf(" %c",&choice); 
		switch (choice) 	
		{ 
			case 'a': 	
				int d; 
				system("cls"); 
				printf("enter the number: "); 
				scanf("%d",&d); 
				insert_first(d); 
				printf("inserted...\npress enter to continue....\n"); 
				getch(); 
				break; 
			case 'b': 
				int e; 
				system("cls"); 
				printf("enter the number: "); 
				scanf("%d",&e); 
				insert_end(e); 
				printf("inserted...\npress enter to continue....\n"); 
				getch(); 
				break;  
			case 'c': 
				int a,b; 
				system("cls"); 
				printf("enter the number and position : "); 
				scanf("%d%d",&a,&b); 
				insert(a,b); 
				printf("done...\n press enter to continue....\n"); 
				getch(); 
				break; 
			case 'd': 		
				system("cls"); 
				Delete_begining(); 
				printf("deleted the first node\npress enter to continue\n"); 
				getch(); 
				break;
			case 'e':
				system("cls");
				Delete_end();
				printf("\nsuccess!!\npress enter to continue\n");
				getch();
				break;
			case 'f':
				int c;
				system("cls");
				printf("enter the position: ");
				scanf("%d",&c);
				Delete(c);
				printf("successful..\npress enter to continue\n");
				getch();
				break;
			case 'g':
				reverse();
				system("cls");
				printf("list reversed... \npress enter to continue....\n");
				getch(); 
				break;
			case 'h':
				int f;
				system("cls");
				f = count_nodes();
				printf("the number of nodes is %d\npress enter to continue\n",f);
				getch();
				break;
			case 'i':
				system("cls"); 
				printf("The list is: \n");
				print(); 
				printf("press enter to continue..\n");
				getch();
				break;
			case 'x':
				exit = true;
				break;
			default: 
				printf("wrong input!!");  
		}  
	} 
} 
