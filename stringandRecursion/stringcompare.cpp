#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1= "abc";
    string s2 = "xyz";
    cout<< s2.compare(s1)<<endl;//positive mean second string is greater 
    //check string are equal or not
     string s3= "abc";
    string s4 = "abc";
    if(!s3.compare(s4))
        cout<< "strings are equal"<< endl;
    string s5 = "hi";
    s5.clear();
    if(s5.empty())
    cout<< "string is empty";
    
     

    return 0;
}