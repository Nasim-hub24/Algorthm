
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin >> n >> e;
    int a[n];
    vector<int> adjacency_list[n];
    while(e--) // TAKIN EDGE INPUT 
    {
        int a,b;
        cin >> a >> b;
        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int x : adjacency_list[i])
        {
            cout << x << " ";
        }
        cout << endl ;
    }
    
}