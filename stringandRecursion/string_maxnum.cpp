#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1= "561349825";
    sort(s1.begin(), s1.end(), greater<int>());
  
    cout<<s1<<endl;
    return 0;
}