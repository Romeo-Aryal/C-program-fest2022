#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 8
int stack[MAX];
int top = -1;
int check_empty(){
	if(top == -1){
		return 1;
	}
	else{
		return 0;
	}
}
int check_full(){
	if(top == MAX-1)
		return 1;
	else
		return 0;
}
void create_new(){
	top = -1;
}

void push(int b){
	if(check_full()){
		printf("the stack is full\n");
		return;
	}
	else{
		top++;
		stack[top]= b;
		printf("%d is pushed to the stack successfully..\n",b);
		return;
		
	}	
}
void pop(){
	int poped;
	if(check_empty()){
		printf("the stack is empty\n");
		return;
	}
	else{
		poped = stack[top];
		top--;
		printf("%d poped successfully from the stack\n",poped);
		return;
	}
}


int main(){
	int choice;
	while(true){
		printf("\toptions\n");
		printf("................................\n");
		printf("1=check wether the stack is empty.\n");
		printf("2=check wether the stack is full.\n");
		printf("3=create a new stack.\n");
		printf("4=push to the stack.\n");
		printf("5=pop from the stack.\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(check_empty()){
					printf("the stack is empty.\n");
				}
				else
					printf("the stack is not empty\n");
				break;
			case 2:
				if(check_full()){
					printf("the stack is full.\n");
				}
				else
					printf("the stack is not full\n");
				break;
			case 3:
				create_new();
				printf("created\n");
				break;
			case 4:
				int b;
				printf("enter the element to be pushed: ");
				scanf("%d",&b);
				push(b);
				break;
			case 5:
				pop();
				
		}
	}
}

