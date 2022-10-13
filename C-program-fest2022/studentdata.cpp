#include <bits/stdc++.h>
using namespace std;


class seit {
    public:

    struct student{
    int rollno;
    string name;
    float sgpa;

    }s[100];
    public:

void inp(){                             // function to acccess data
    s[0].rollno = 23;                   // manually entering data
    s[0].name = "Rohan";
    s[0].sgpa = 10;

    s[1].rollno = 2;
    s[1].name = "Mohan";
    s[1].sgpa = 8;
     
    s[2].rollno = 34;
    s[2].name = "Ram";
    s[2].sgpa = 9;
     
    s[3].rollno = 55;
    s[3].name = "Sham";
    s[3].sgpa = 10;
     
    s[4].rollno = 67;
    s[4].name = "Omkar";
    s[4].sgpa = 5;
     
    s[5].rollno = 68;
    s[5].name = "Yash";
    s[5].sgpa = 10;
     
    s[6].rollno = 31;
    s[6].name = "Aniket";
    s[6].sgpa = 8;
     
    s[7].rollno = 69;
    s[7].name = "Piyush";
    s[7].sgpa = 4;
     
    s[8].rollno = 47;
    s[8].name = "Om";
    s[8].sgpa = 10;
     
    s[9].rollno = 72;
    s[9].name = "Vicky";
    s[9].sgpa = 6;
     
    s[10].rollno = 51;
    s[10].name = "Rocky";
    s[10].sgpa = 8;

    s[11].rollno = 50;
    s[11].name = "Yashraj";
    s[11].sgpa = 5;

    s[12].rollno = 58;
    s[12].name = "Amol";
    s[12].sgpa = 8;

    s[13].rollno = 80;
    s[13].name = "Anmol";
    s[13].sgpa = 9;

    s[14].rollno = 79;
    s[14].name = "Aditya";
    s[14].sgpa = 7;
}

void inp2(int &n){
    int ent;
    cout<<"Enter the number of Entries : ";
    cin>>ent;
    cout<<n;
    n--;
    for(int i = 1 ; i <= ent ; i++){
        cout<<"Enter Rollno : "<<endl;
        cin>>s[n + i].rollno;
        cout<<"Enter Name : "<<endl;
        cin>>s[n + i].name;
        cout<<"Enter SGPA : "<<endl;
        cin>>s[n + i].sgpa;
    }
    n = n + ent + 17
    ;
 
}

void quick(struct student s[],int low,int high){           // Quick Sort 
int piv = low;
low = low+1;
int si = low,ei = high;
bool flagl =0,flagh=0;
while(low<=high){

    if(s[low].sgpa>s[piv].sgpa&&!flagl){
    flagl=1;
    }
    else if(!flagl){
    low++;
    }
    if(s[high].sgpa<s[piv].sgpa&&!flagh){
    flagh=1;
    }
    else if(!flagh){
    high--;
    }
    if(flagl&&flagh){
    swap(s[high],s[low]);
    flagl=0,flagh=0;
    }
    }

    swap(s[piv],s[high]);
    if(si<=high-1){
        quick(s,si,high-1);
    }
    if(high+1<=ei){
        quick(s,high+1,ei);
    }
}

void display(int n){
    cout<<n<<endl;
    cout << "Name"  <<  "\t" << "Roll No" << "\t" << "sgpa" << endl;
    for(int i=0;i<n;i++){
        cout << s[i].name << "\t" << s[i].rollno << "\t" << s[i].sgpa << endl;
    }
}

void bubblesort(int n){               // Bubble sort
    for(int i=0;i<n-1;i++){                      
    for(int j=0;j<n-1;j++){                   
        if(s[j].rollno>s[j+1].rollno){
                                                // Swapping rollno
            int temp1 = s[j].rollno;           
            s[j].rollno = s[j+1].rollno;
            s[j+1].rollno = temp1;
                                                //swapping name
            string temp2 = s[j].name;         
            s[j].name = s[j+1].name;
            s[j+1].name = temp2;
                                                //swapping sgpa
            float temp3 = s[j].sgpa;       
            s[j].sgpa = s[j+1].sgpa;
            s[j+1].sgpa = temp3;
           
        }
    }
}
}

void sgpa(int n){                     // linear Search
    float element;
    do{
    cout << "Enter SGPA you want to search : ";         // Taking the sgpa user want to search from input
    cin>>element;
    if(element>=0 && element <=10){
        break;
    }
    else{
        cout<<"Enter Valid SGPA (Between 0 to 10)"<<endl;       //validations for sgpa range
        continue;
    }
    }while(true);

int flag=0;
for (int i = 0; i < n; i++)
{
    if(element==s[i].sgpa){
        cout  << "sgpa :"<< "\t" << s[i].sgpa << "\t" << "Name:"<< "\t"<< s[i].name << "\t" << "Roll no:"<<"\t" << s[i].rollno << endl;
        flag =1;
    }
}

if(!flag){
    cout << "\n<<-------SGPA not found------->>" << endl;           // SGPA not present
}
cout << endl;
}

void binarysearch(int n){             // binary search
    for(int i=0;i<n-1;i++){                       
    for(int j=0;j<n-1;j++){                   
        if(s[j].name>s[j+1].name){
                                                // Swapping
            int temp = s[j].rollno;          
            s[j].rollno = s[j+1].rollno;
            s[j+1].rollno = temp;

            string temps = s[j].name;       
            s[j].name = s[j+1].name;
            s[j+1].name = temps;

            float tempspga = s[j].sgpa;       
            s[j].sgpa = s[j+1].sgpa;
            s[j+1].sgpa = tempspga;
           
        }
    }
}

int low = 0,high = n-1,mid;
bool flagg =0;
string namee;
cout << "Enter name you want to search : ";             //Taking input of name user want to search 
cin>>namee;

while(high>=low){
    mid = (high+low)/2;

    if(namee==s[mid].name){
        flagg =1;
        break;
    }

    else if(namee>s[mid].name){
        low = mid+1;
    }

    else{
        high = mid-1;
    }
}
if(flagg){
    cout << "Name:" << s[mid].name << " \t" << "Roll no:" << " \t" << s[mid].rollno << " \t" << "sgpa: "<<" \t"<< s[mid].sgpa << endl;
}

else{
    cout << "\n<<-------Name not found------->> " << endl;              // Name not present
}
cout << endl;
}

void insertionsort(int n){                // Insertion Sort
    for(int i=1;i<n;i++)
 {
   if(s[i].name<s[i-1].name)
   {
        int j = i;
        while(s[j].name<s[j-1].name&&j>0){
                                                    // swapping
            swap(s[j] , s[j-1]);
            j--;
            if(j==0){
                break;
            }
        }
    }
}

cout << "Name"  <<  "\t" << "Roll No" << "\t" << "sgpa" << endl;

for(int i=0;i<n;i++){
        cout << s[i].name << "\t" << s[i].rollno << "\t" << s[i].sgpa << endl;
    }
}

void quicksort(int n){                // Quick sort
    quick(s,0,n-1);
    cout  << "Name"  <<  "\t" << "Roll No" << "\t" << "sgpa" << endl;
    for(int i= n-1;i>=max(0,n-1-9);i--){
        cout  << s[i].name << "\t" << s[i].rollno << "\t" << s[i].sgpa << endl;
        }
}
};

int main(){

class seit obj;                 // creatinf object of class seit
obj.inp();
int n = 15;
   

while(1){                       // Initializing while loop
    cout << "\n<<----------------[Enter Choice No]----------------->>\n" << endl;
    cout << "1] Display Data" << endl;
    cout << "2] Design a roll call list, arrange list of students according to roll numbers in ascending order (Use Bubble Sort)"
