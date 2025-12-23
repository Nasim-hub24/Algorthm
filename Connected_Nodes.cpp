
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N, E;
    cin >> N >> E;

    vector<vector<int>> adj_list(N);

    for (int i = 0; i < E; i++) 
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u); 
    }

    for (int i = 0; i < N; i++) 
    {
        sort(adj_list[i].rbegin(), adj_list[i].rend());
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) 
    {
        int X;
        cin >> X;

        if (adj_list[X].empty()) 
        {
            cout << "-1\n";
        } 
        else 
        {
            for (int node : adj_list[X]) 
            {
                cout << node << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

