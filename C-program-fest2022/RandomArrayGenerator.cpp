//Program to generate random arrays of given size implemented in C++
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

//Functionality to generate random arrays.
int* rdm(int n){
    int* temp_arr=(int *)malloc(n*sizeof(int));
    int random_num=0;
    for(int i=0;i<n;i++){
        random_num=1+(rand() % 99);
        //cout<<random_num<<endl;
        temp_arr[i]=random_num;
    }
    return temp_arr;
}

int main()
{
    int n=0;
    cout<<"Enter the number of elements to be stored in the array:"<<endl;
    cin>>n;
    int *temp = rdm(n);
    for(int i=0;i<n;i++){
        cout<<temp[i]<<endl;
    }
    return 0;
}
