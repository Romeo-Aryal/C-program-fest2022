#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first<p2.first;
}

int main()
{
    pair<int , char> p;//pair is used to two different type data type
    p.first = 3;//accesing the elments for pair
    p.second = 'f';
    //going to solve a question
    int arr[]={10, 16, 7 , 14 , 5 , 3, 12 , 9};
    vector<pair<int , int >>v;

    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        /* code */
        v.push_back(make_pair(arr[i],i));

    }

    sort(v.begin(), v.end(), myCompare);
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        arr[v[i].second]= i;
    }

    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    
    


    return 0;
}