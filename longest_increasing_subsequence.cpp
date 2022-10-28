#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

// Time Complexity -> O(N^2)
// Space Complexity -> O(N)

void lis(vector<int> &a)
{
    int n = a.size();
    vector<int> dp(n, 1);
    vector<int> prev_ind(n, 0);
    int len = 1;
    int last_ind = 0;
    for (int i = 0; i < n; i++)
    {
        prev_ind[i] = i;
        for (int prev = 0; prev < i; prev++)
        {
            if (a[i] > a[prev])
            {
                if (dp[i] < 1 + dp[prev])
                {
                    dp[i] = 1 + dp[prev];
                    prev_ind[i] = prev;
                }
            }
        }
        if (dp[i] > len)
        {
            len = dp[i];
            last_ind = i;
        }
    }
    vector<int> lis;
    lis.push_back(a[last_ind]);
    while (prev_ind[last_ind] != last_ind)
    {
        last_ind = prev_ind[last_ind];
        lis.push_back(a[last_ind]);
    }
    reverse(lis.begin(), lis.end());

    // Printing Longest Increasing Subsequence
    for (auto num : lis)
    {
        cout << num << " ";
    }
    cout << endl;

    // Printing Length of Longest Increasing Subsequence
    cout << len << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    lis(a);

    return 0;
}