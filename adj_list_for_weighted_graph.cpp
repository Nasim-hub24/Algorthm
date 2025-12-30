
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<pair<int,int>> adj_list[node];
    while (edge--)
    {
        int a,b,cost;
        cin >> a >> b >> cost;
        adj_list[a].push_back({b,cost});
        adj_list[b].push_back({a,cost});
    }
    for (int i = 0; i < node; i++)
    {
        cout << i << "->";
        for (auto p : adj_list[i])
        {
            cout << p.first << " " <<  p.second << " ,";
            cout << endl;
        }
    } 
}