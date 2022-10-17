#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *insertInBST(node *root, int data)
{
    // base case
    if (root == NULL)
    {
        return new node(data);
    }

    // rec case
    //  Insert in subtree and update the pointers
    if (data <= root->data)
    {
        root->left = insertInBST(root->left, data);
    }
    else
    {
        root->right = insertInBST(root->right, data);
    }
    return root;
}

node *build()
{
    // read a list of numbers till -1 and also theses numbers will be inserted into BST
    int d;
    cin >> d;
    node *root = NULL;
    while (d != -1)
    {
        root = insertInBST(root, d);
        cin >> d;
    }
    return root;
}

// searching in BST
bool search(node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == data)
    {
        return true;
    }

    if (data <= root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}

// bfs traversal of a tree level wise
void bfs(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *f = q.front();
        if (f == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << f->data << " ";
            q.pop();
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
    }
    return;
}

// deletion in BST
node *deleteInBST(node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (data < root->data)
    {
        root->left = deleteInBST(root, data);
        return root;
    }
    else if (data == root->data)
    {
        // Found the nodes to delete to delete three cases
        // 1. node with 0 children that is leaf node
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 2. case only one child
        if (root->left != NULL and root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }

        if (root->right != NULL and root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        // 3. case two children
        node *replace = root->right;
        while (replace->left != NULL)
        {
            replace = replace->left;
        }
        root->data = replace->data;
        root->right = deleteInBST(root->right, replace->data);
        return root;
    }
    else
    {
        root->right = deleteInBST(root->right, data);
        return root;
    }
}

//CHECK IF A TREE IS BST OR NOT

bool isBST(node*root,int minV = INT_MIN,int maxV = INT_MAX){
    if(root == NULL){
        return NULL;
    }

    if(root->data > minV and root->data<= maxV and isBST(root->left,minV,root->data) and isBST(root->right,root->data,maxV)){
        return true;
    }
    return false;
}

//Flatten a BST -> conversion of a BST in linear data structure is knowwn as flatten a bst
// Here we will convert a BST into a sorted LINKED LIST
class LinkedList{
    public:
    node*head;
    node*tail;
};

LinkedList flattenALinkedList(node* root){
    LinkedList l;
    if(root == NULL){
        l.head = l.tail = NULL;
        return l;
    }
    //Leaf node
    if(root->left == NULL and root->right == NULL){
        l.head = root;
        l.tail = root;
        return l;
    }

    // left is not NULL
    if(root ->left != NULL and root->right == NULL){
        LinkedList leftLL = flattenALinkedList(root->left);
        leftLL.tail -> right = root;
         l.head = leftLL.head;
         l.tail = root;
         return l;
    }
    // right is not NULL 
    if(root->right != NULL and root->left == NULL){
        LinkedList rightLL = flattenALinkedList(root->right);
        root->right = rightLL.tail;
        l.head = root;
        l.tail = rightLL.tail;
        return l;
    }

    //Both sides are not NULL
    LinkedList leftLL = flattenALinkedList(root->left);
    LinkedList rightLL = flattenALinkedList(root->right);
    leftLL.tail ->right = root;
    root->right = rightLL.head;

    l.head = leftLL.head;
    l.tail = rightLL.tail;

    return l;
}


int main()
{
    node *root = build();
    bfs(root);
    node* newnode = deleteInBST(root,2);
}