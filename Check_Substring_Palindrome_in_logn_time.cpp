#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll prefix_hash[200005];
ll prefix_hashr[200005];

ll power(ll base, ll n, ll m)
{
    ll ans = 1;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            n = n - 1;
            ans = (ans * base) % m;
        }
        else
        {
            n = n / 2;
            base = (base * base) % m;
        }
    }
    return ans;
}

ll compute_substring_hash(ll l, ll r)
{
    ll hash = prefix_hash[r];

    if (l > 0)
    {
        hash = (hash - prefix_hash[l - 1] + M) % M;
    }

    // divide

    hash = (hash * power(power(31, l, M), M - 2, M)) % M;

    return hash;
}

ll compute_substring_hash1(ll l, ll r)
{
    ll hash = prefix_hashr[r];

    if (l > 0)
    {
        hash = (hash - prefix_hashr[l - 1] + M) % M;
    }

    // divide

    hash = (hash * power(power(31, l, M), M - 2, M)) % M;

    return hash;
}

void compute(string &s)
{
    ll pr = 1;
    ll hash = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        hash = (hash + ((s[i] - 'a' + 1) * pr) % M) % M;
        prefix_hash[i] = hash;
        pr = (pr * 31) % M;
    }
}

void computeR(string &s)
{
    string temp = s;
    reverse(temp.begin(), temp.end());
    ll pr = 1;
    ll hash = 0;
    for (ll i = 0; i < temp.size(); i++)
    {
        hash = (hash + ((temp[i] - 'a' + 1) * pr) % M) % M;
        prefix_hashr[i] = hash;
        pr = (pr * 31) % M;
    }
}

bool checkPalindrome(ll l, ll r, ll n)
{
    ll a = compute_substring_hash(l, r);
    ll b = compute_substring_hash1(n - 1 - r, n - 1 - l);
    return (a == b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    compute(s);
    computeR(s);
    ll q;
    cin >> q;
    ll n = s.size();
    // Each query can be answered in logn time complexity
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        if (checkPalindrome(l, r, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}