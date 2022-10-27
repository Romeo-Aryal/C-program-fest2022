#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

vector<int> adj[200005];
int lev[200005];
int subtree[200005];
int height = -1;
int parent[200005][18];

void dfs(int node, int par, int level = 1)
{

    lev[node] = level;
    parent[node][0] = par;

    for (int i = 1; i < 18; i++)
    {
        parent[node][i] = parent[parent[node][i - 1]][i - 1];
    }

    int sum = 0;

    for (auto it : adj[node])
    {
        if (it != par)
        {
            dfs(it, node, level + 1);
            sum += subtree[it];
        }
    }
    subtree[node] = 1 + sum;
}

int kthParent(int node, int k)
{
    int cnt = 0;
    while (k)
    {
        if (k & 1)
        {
            node = parent[node][cnt];
        }
        cnt++;
        k = k >> 1;
    }
    return node;
}

// Considers u to be the deepest level
//  . v
//  . .
//  . .
//  u .
int lca(int u, int v)
{
    if (lev[v] > lev[u])
    {
        swap(u, v);
    }

    int k = lev[u] - lev[v];

    int cnt = 0;
    while (k)
    {
        if (k & 1)
        {
            u = parent[u][cnt];
        }
        cnt++;
        k = k >> 1;
    }

    if (u == v)
    {
        return u;
    }

    for (int i = 17; i >= 0; i--)
    {
        if (parent[u][i] != parent[v][i])
        {
            u = parent[u][i];
            v = parent[v][i];
        }
    }
    return parent[u][0];
}

int distance(int a, int b)
{
    return lev[a] + lev[b] - 2 * lev[lca(a, b)];
}

int main()
{

    return 0;
}