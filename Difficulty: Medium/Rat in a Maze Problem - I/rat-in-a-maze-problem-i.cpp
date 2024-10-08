//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> ans;
        int n = mat.size();
        vector<vector<int>> vis(n, vector<int> (n,0));
        
        if(!mat[n-1][n-1]) return ans;
        
        vis[n-1][n-1]=1;
        help(n-1, n-1, mat, n, "", ans, vis);
        
        return ans;
        
    }
    
    void help(int row, int col, vector<vector<int>>& mat, int n, string path, vector<string>& ans, vector<vector<int>>& vis){
        
        
        if(row==0 && col==0){
            ans.push_back(path);
            return;
        }
        
        string p ="RDLU";
        int drow[]={0,-1,0,1};
        int dcol[]= {-1,0,1,0};
        
        for(int i =0; i<4; i++){
            int r = row+drow[i];
            int c = col + dcol[i];
            
            if(r>=0 && c>=0 && r<n && c<n && mat[r][c]==1 && !vis[r][c]){
                vis[r][c]=1;
                help(r,c,mat,n, p[i]+path, ans, vis);
                vis[r][c]=0;
            }
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends