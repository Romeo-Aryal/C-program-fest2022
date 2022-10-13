#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 8
struct stack{
	int item[MAX];
	int top;
};
int check_empty(struct stack *s){
	if(s->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}
int check_full(struct stack *s){
	if(s->top == MAX-1)
		return 1;
	else
		return 0;
}
struct stack * create_new(){
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->top = -1;
	return s;
}

void push(struct stack *s,int b){
	if(check_full(s)){
		printf("the stack is full\n");
		return;
	}
	else{
		s->top++;
		s->item[s->top]= b;
		printf("%d is pushed to the stack successfully..\n",b);
		return;
		
	}	
}
void pop(struct stack *s){
	int poped;
	if(check_empty(s)){
		printf("the stack is empty\n");
		return;
	}
	else{
		poped = s->item[s->top];
		s->top--;
		printf("%d poped successfully from the stack\n",poped);
		return;
	}
}
void display_stack(struct stack *s){
	int temp = s->top;
	if(check_empty(s)){
		printf("the stack is empty\n");
		return;
	}
	printf("the stack element :\n");
	while(temp>=0){
		printf("%d  ",s->item[temp]);
		temp--;
	}
	return;
	
}


int main(){
	struct stack *s;
	int choice;
	bool exit = false;
	while(!exit){
		system("cls");
		printf("options\n");
		printf(".........\n");
		printf("1=create a new stack.\n");
		printf("2=push to the stack.\n");
		printf("3=pop from the stack.\n");
		printf("4=display the stack.\n");
		printf("5=exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				system("cls");
				s = create_new();
				printf("created\n");
				printf("press enter to continue ");
				getch();
				break;
			case 2:
				system("cls");
				int b;
				printf("enter the element to be pushed: ");
				scanf("%d",&b);
				push(s,b);
				printf("press enter to continue");
				getch();
				break;
			case 3:
				system("cls");
				pop(s);
				printf("press enter to continue");
				getch();
				break;
			case 4:
				system("cls");
				display_stack(s);
				printf("press enter to continue");
				getch();
				break;
			case 5:
				exit=true;
				break;
			default:
				printf("wrong input!!\n");
		}
	}
}

