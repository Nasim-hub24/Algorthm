// DFS INPLEMENTATION ON 2D GRID
#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
vector<pair<int , int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
void dfs(int si, int sj)
{
    cout << si << " " << sj  << endl;  // PRINT THE CURRENT NODE
    vis[si][sj] = true;      // MARK IT VISITED 
    for (int i=0; i<4; i++) // EXPLORE NEIGHBORS
    {
        int ci, cj;
        ci = si + d[i].first;
        cj= sj + d[i].second;
        if (vis [ci][cj]== false)
        {
            
        }
        
    }

}    
int main()
{
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cin >> grid[i][j];
        }  
    }

    int si, sj;
    cin >> si >> sj;
    //dfs(si,sj);

}
