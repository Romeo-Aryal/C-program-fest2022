/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//A program to demonstrate passing objects by value to a member function of the same class



#include<iostream>
using namespace std;
class weight
{

int kilogram;
int gram;
public:
void getdata ();
void putdata ();
void sum_weight (weight,weight) ;
} ;
void weight :: getdata()
{
cout<<"Kilograms:";
cin>>kilogram;
cout<<"Grams:";
cin>>gram;
}
void weight :: putdata ()
{
cout<<kilogram<<" Kgs. and"<<gram<<" grams."<<endl;
}
void weight :: sum_weight(weight w1,weight w2)
{
gram = w1.gram + w2.gram;
kilogram=gram/1000;


gram=gram%1000;
kilogram+=w1.kilogram+w2.kilogram;
}
int main ()
{
weight w1,w2,w3;
cout<<"Enter weight in kilograms and grams\n";
cout<<"Enter weight #1"<<endl ;
w1.getdata();
cout<<"Enter weight #2"<<endl ;
w2.getdata();
w3.sum_weight(w1,w2);
cout<<"Weight #1 = "<<endl;
w1.putdata();
cout<<"Weight #2 = "<<endl;
w2.putdata();
cout<<"Total Weight = ";
w3.putdata();
return 0;
}