
#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        //step 1 = bar kora ana

        int parent = q.front();
        q.pop();

        // step 2 = oi node ka niya kaj

        cout << parent << " ";

        // step 3 = children gula push kora raka

         for (int child : adj_list[parent])
         {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;         
            }
         } 
    } 
}
int main()
{
    int node, edge;
    cout << "enter number of node and edge: " << endl;
    cin >> node >> edge;

    while (edge --)
    {
        int a,b;
        cout << "enter connected node: " << endl;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    bfs(0);  
}