//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    bool find(int n,vector<int>& arr,int k,int sum,int i){
        if(i==n){
            if(sum==k){
                return true;
            }
            else return false;
        }
        if(sum>k) return false;
        
        if(find(n,arr,k,sum,i+1)) return true;
        sum+=arr[i];
        if(find(n,arr,k,sum,i+1)) return true;
        
        return false;
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
        return find(n,arr,k,0,0);
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        bool ans = obj.checkSubsequenceSum(n, arr, k);
        cout<<( ans ? "Yes" : "No")<<"\n";
    }
    return 0;
}
// } Driver Code Ends