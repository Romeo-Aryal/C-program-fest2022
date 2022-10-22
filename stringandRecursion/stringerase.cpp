#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1= "nincompoop";

    s1.erase(3,3);
    //this function is used to erase to some specific character from
    // string like first is defined as the from where to start and
    //second was defined as the how mant character would like to erase.
    //output- ninpoop
    cout<<s1<<endl;
    return 0;
}