#include<bits/stdc++.h>
using namespace std;

int f(int n)
{   
    if(n==0)
    return 1;
    if(n==1)
    return 1;
   //because we either  climb step 1 and step 2 thats why we are calculating these type of meaning.
   //it is also a fibonacci problem so we can usme optimised solution of this question.
    return f(n-1)+f(n-2);
}

int main(){
    int n;
    cin>>n;

    cout<<f(n);

    return 0;
}
