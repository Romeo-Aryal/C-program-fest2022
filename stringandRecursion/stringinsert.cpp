#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1= "nincompoop";

    s1.insert(2, "lol");
   //this function is add string in another
   //string first in the bracket is index from where
   //to we want to add string....
    cout<<s1<<endl;
    return 0;
}