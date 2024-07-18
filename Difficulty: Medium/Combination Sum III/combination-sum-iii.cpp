//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> combinationSum(int K, int N) {
        vector<int>arr={1,2,3,4,5,6,7,8,9};
        vector<int>ds;
        int index=0;
        vector<vector<int>>result;
        solve(index,N,K,arr,ds,result);
        return result;
    }
    void solve(int index,int target,int k,vector<int>&arr,vector<int>&ds,vector<vector<int>>&result){
        if(target==0 and ds.size()==k){
            result.push_back(ds);
            return;
        }
        for(int i=index;i<arr.size();i++){
            if(i>index and arr[i]==arr[i-1])continue;
            if(arr[i]>target)break;
            ds.push_back(arr[i]);
            solve(i+1,target-arr[i],k,arr,ds,result);
            ds.pop_back();
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends