//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
    public:
  void dfs(int r, int c, vector<vector<int>>& vis, vector<vector<char>>& grid)
  {
      vis[r][c] = 1;
      int n = grid.size();
      int m = grid[0].size();
      for(int delrow = -1; delrow<=1 ;delrow++)
      {
          for(int delcol = -1; delcol<=1 ;delcol++)
          {
              int nrow = r + delrow;
              int ncol = c + delcol;
              if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='1')
              {
                  dfs(nrow, ncol, vis, grid);
              }
              
          }
      }
  }
  
    void bfs(int r, int c, vector<vector<int>>& vis, vector<vector<char>>& grid)
    {
        vis[r][c] = 1;
        queue<pair<int,int>> q;
        q.push({r,c});
        int n = grid.size();
        int m = grid[0].size();
        
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int delrow = -1; delrow<=1 ;delrow++)
            {
                for(int delcol = -1; delcol<=1 ;delcol++)
                {
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='1')
                    {
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }
  
  
  
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;
        for(int i = 0; i<n ;i++)
        {
            for(int j = 0; j<m ;j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    dfs(i, j, vis, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }

};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends