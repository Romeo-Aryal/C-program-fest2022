#include<iostream>

using namespace std;

int main(){
    int n=1;
    cout<<"Enter a matrix to be checked:"<<endl;
    cout<<"Enter the size for the square matrix in single digit:"<<endl;
    cin>>n;
    //int **inp_arr = (int **)(malloc(n*n*sizeof(int))); //dynamic allocation of the array memory using malloc()
    int inp_arr[n][n];
    int zero_elm=0;
    cout<<"Enter matrix details:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"Enter the matrix data for position:"<<i<<" "<<j<<" "<<":"<<endl;
            cin>>inp_arr[i][j];
            if(inp_arr[i][j]==0){
                zero_elm++;
            }
        }
    }

    if(zero_elm>(n*n/2)){ //Check if given matrix data is sparse of nor!
        cout<<"The given matrix data forms a sparse matrix !!";
        cout<<"Now printing the sparse matrix in compressed form:"<<endl; //Printing sparse matrix in compressed form!
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(inp_arr[i][j]!=0)
                {
                    cout<<i<<" "<<j<<" "<<inp_arr[i][j]<<endl;
                }
            }
        }
    }

    else{
        cout<<"The given matrix data does not form a sparse matrix !!"<<endl;
        return 0;
    }


    return 0;
}
