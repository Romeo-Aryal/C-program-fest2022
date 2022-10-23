#include<iostream>
#include<vector>//used to include vetor
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);//used to push value in v vector(array) in the end
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)//v.size() used for the size in vector
    {
      /* code */
      cout<<v[i]<<endl;
    }//output is 1 2 3

    //another way to itrate for vector
    vector<int>::iterator it;//let it is pointer for vector which points to every elments of vector from which 
    //we can itrate through all over the vector
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<endl;
    }//1 2 3


    //another way to traverse using auto which decided automatically 

    for(auto element:v){
        //element are those which are present in the vector
        cout<<element<<endl;
    }
    // 1 2 3
    
    //pop function for vector which remove element from back

    v.pop_back(); // 1 2

    vector<int> v2 (3, 50); 
    //here we specify our vector elements like first one (3) is 
    // decide to size means how many elements are there 
    // second one decided 50 what value have three elements in case of similiar
    // 50 50 50

    swap(v, v2);
    //swap both vector's value 
    //v= 50 50 50 and v2= 1 2 
    for(auto element:v)
    {
        cout<<element<<endl;
    }

    for(auto element:v2)
    {
        cout<<element<<endl;
    }

    //sort function for vector
    sort(v.begin(), v.end());

    

    

    return 0;
}