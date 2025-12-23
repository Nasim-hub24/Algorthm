
#include<bits/stdc++.h>
using namespace std;
vector <int> adj_list[1005];
bool vis[1005];

void dfs(int src)
{
    cout << src << endl;  // PRINT THE CURRENT NODE
    vis[src] = true;      // MARK IT VISITED 
    for (int child: adj_list[src]) // EXPLORE NEIGHBORS
    {
        if (vis[child]== false)
        {
            dfs(child); // RECURSIVE DFS TRAVERSAL
        }
    }
}

int main()
{
    int n,e;
    cin >> n >> e;  // TAKING NUMBER OF NODE AND EDGE 
    while (e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false, sizeof(vis));
    dfs(0); // START DFS TRAVERSAL FROM NODE 0
}