#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *createNode(int data){
	struct node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void preOrder(struct node *root){
	if(root != NULL){
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(struct node *root){
	if(root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ",root->data);
	}
}

void inOrder(struct node *root){
	if(root != NULL){
		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);
	}
}

int main(){
	//Constructing root node
	struct node *p=createNode(2);
	struct node *p1=createNode(1);
	struct node *p2=createNode(4);
	
	//Linking the root with left and right children
	p->left=p1;
	p->right=p2;
	
	preOrder(p);
	printf("\n");
	postOrder(p);
	printf("\n");
	inOrder(p);
  
  return 0;
}
