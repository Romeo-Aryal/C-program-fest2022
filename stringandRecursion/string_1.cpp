#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;//declare
    string str1(5, 'n');//declare to print n five times
    cout<< str1 << endl; //nnnnn
    string str2;
    getline(cin, str2);// take input from the user like - 
    //"hi i am alok rawat"
    //print "above statement"
    cout<< str2<<endl;

    //apend two strings
    string s1="fam";
    string s2="ily";

    s1.append(s2);//used to add two strings
    cout<<s1<<endl;
    cout<< s1 + s2 << endl;



    

    
    return 0;
}
