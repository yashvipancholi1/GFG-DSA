//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxChildren(int N, int M, vector<int> &greed, vector<int> &sz) {
        // code here
        sort(greed.begin(), greed.end());
        sort(sz.begin(), sz.end());
        int l=0, r = 0;
        while(l<N && r<M){
            if(greed[l]<=sz[r]){
                l=l+1;
            }
            r=r+1;
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;

        vector<int> greed(N), sz(M);
        for (int i = 0; i < N; i++) {
            cin >> greed[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> sz[i];
        }
        Solution obj;
        cout << obj.maxChildren(N, M, greed, sz) << endl;
    }
    return 0;
}
// } Driver Code Ends