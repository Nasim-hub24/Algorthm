
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int adjancency_matrix [n][n];

    for (int i = 0; i < n; i++) // AT FIRST ALL ADJACENCY MATRIX VLAUE WILL BE ZERO
    {
        for (int j = 0; j < n; j++)
        {
            adjancency_matrix [i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            if (i ==j)
            {
                adjancency_matrix[i][j] =1;
            }
        } 
    }
    
    
    for(int i=0; i<e; i++) // INPUT CONNECTION
    {
        int a, b;
        cin >> a >> b;

        adjancency_matrix [a][b]=1;
        adjancency_matrix[b][a]=1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjancency_matrix [i][j] << " ";
        }
        cout << endl;
    }
}