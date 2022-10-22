#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1= "abjdlajdsjoosjkakdhsndsaksh";
    
    int freq[26];
    for (int i = 0; i < 26; i++)
    
        /* code */
        freq[i] = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            /* code */
            freq[s1[i]-'a']++;
        }
        char ans = 'a';
        int maF = 0;
        for (int i = 0; i < 26; i++)
        {
            /* code */
            if (freq[i]>maF)
            {
                /* code */
                maF = freq[i];
                ans = i +'a';

            }
            
        }
        cout<<maF << " " << ans << endl;
        
    
    
  
   
    return 0;
}