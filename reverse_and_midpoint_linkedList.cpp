#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

// insertion
void insertAtHead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}
int length(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    putchar('\n');
}

// here type is node*
node *take_input()
{
    int d;
    cin >> d;

    node *head = NULL;
    while (d != -1)
    {
        insertAtHead(head, d);
        cin >> d;
    }
    return head;
}

node *take_input_by_file()
{
    int d;

    node *head = NULL;
    while (cin >> d)
    {
        insertAtHead(head, d);
    }
    return head;
}

ostream &operator<<(ostream &os, node *head)
{
    print(head);
    return os;
}
istream &operator>>(istream &is, node *&head)
{
    head = take_input();
    return is;
}


//reverse the Linked List
void reverse_it(node*&head){
    node* C = head;
    node* P = NULL;
    node*N;

    while(C!=NULL){
        //save the add of next
        N = C->next;
        //make the curr node point to pre
        C->next = P;
        //update the current and previous node

        P = C;
        C = N;
    }
    //at the last point the head to the last element of the ll that will be P
    head = P;
}

node* reverse_rec(node*head){
    //smalllest linkedlist
    if(head->next == NULL or head == NULL){
        return head;
    }
    //rec case
    node* shead = reverse_rec(head->next);

    node*temp = shead;
    while(temp->next != NULL){
        temp = temp->next;
    }
    head->next = NULL;
    temp->next = head;
     return shead;
}

//optimize 
node* reverse_rec_opz(node*head){
    //smalllest linkedlist
    if(head->next == NULL or head == NULL){
        return head;
    }
    //rec case
    node* shead = reverse_rec(head->next);
    head->next->next = head;
    head->next = NULL;
    return shead;
}

//mid_point calculaton
node* RunnerTechnique(node*head){
    if(head==NULL || head->next == NULL){
        return head;
    }

    node*slow = head;
    node*fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main()
{
    node *head;
    cin >> head;
    cout << head;
    // reverse_it(head);
    head = reverse_rec(head);
    cout << head;
   head =  reverse_rec_opz(head);
    cout << head;
    node *mid = RunnerTechnique(head);
    cout<<mid<<endl;

}