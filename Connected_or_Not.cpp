
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adjacency_matrix(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) 
    {
        adjacency_matrix[i][i] = 1;
    }

    for (int i = 0; i < e; i++) 
    {
        int a, b;
        cin >> a >> b;
        adjacency_matrix[a][b] = 1;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) 
    {
        int a, b;
        cin >> a >> b;
        if (adjacency_matrix[a][b] == 1) 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }

    return 0;
}

