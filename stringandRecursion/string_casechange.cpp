#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//a is greater than A by 32
int main()
{
    string str="adsfchflwfjg";
    //convert into upper case
    for (int i = 0; i < str.size(); i++)
    {
        /* code */
        if(str[i]>= 'a' && str[i]<='z')
            str[i] -=32;
    }
    cout << str <<endl;
    
    //convert to lower case

    for (int i = 0; i < str.size(); i++)
    {
        /* code */
        if (str[i] >= 'A' && str[i] <='Z')
        {
            /* code */
            str[i] +=32;
        }
        
    }
    cout<< str << endl;
    
    //string case change by inbuilt function
    string s = "faksghidjdmg";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;

    //to lower case
     transform(s.begin(), s.end(), s.begin(), ::tolower);
     cout << s << endl;
    return 0;
}