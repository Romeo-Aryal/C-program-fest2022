#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int m , n , p;
        int a[m][n];
        scanf("%d %d %d", &m , &n , &p);
        //m describe particpant 
        //n describe days
        //p descirbe jhone
        cout<<m <<n<<p;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>> a[i][j];
                cout<<a[i][j];
            }
        }
         for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<< a[i][j] ;
                
            }
            cout<<endl;
        }
        
    }

    return 0;
}