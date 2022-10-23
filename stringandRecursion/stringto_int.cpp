#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1= "786";
    int x = stoi(s1);//this function is used to convert 
    //string in the int
    cout<<x+2<<endl;
    //int to string
    int y = 786;

    cout<< to_string(y) + "2" << endl;
    //7862
    return 0;
}