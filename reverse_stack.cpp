#include<bits/stdc++.h>
using namespace std;

void transfer(stack<int> &s1,stack<int> &s2, int n){
    for(int i = 0;i<n;i++){
        s2.push(s1.top());
        s1.pop();
    }
}

void reverse(stack<int> &s1){
    int top = s1.top();
    stack<int> s2;

    int n = s1.size();

    for(int i = 0;i<n;i++){
        int x = s1.top();
        s1.pop();

        transfer(s1,s2,n-i-1);
        s1.push(x);
        transfer(s2,s1,n-i-1);
    }
}


////////////////////recursive reverse //////////////////
void insert_at_bottom(stack<int> &s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }

    int data = s.top();
    s.pop();
    insert_at_bottom(s,x);
    s.push(data);
}

void reverse_stack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int x = s.top();
    s.pop();
    reverse_stack(s);
    insert_at_bottom(s,x);
}
int main(){
    stack<int> s1;

    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        s1.push(x);
    }

    reverse_stack(s1);

    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
}