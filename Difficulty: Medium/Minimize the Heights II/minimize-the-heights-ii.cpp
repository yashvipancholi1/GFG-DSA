//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        //logic is that we iterate using i. elements before i will add k to them
        //and elements after i will remove k from them
        //we'll get the difference at each iterations and we'll compare using min at all.
        
        sort(arr, arr+n);
        int diff = arr[n-1] - arr[0];
        int mini, maxi;
        
        
        for(int i=0; i<n; i++){
            mini = min(arr[i]-k, arr[0]+k);
                
            
            maxi=max(arr[i-1]+k, arr[n-1]-k);
            
            
            if(mini<0){
                continue;
            }
            
            diff = min(diff, maxi-mini);
        }
        return diff;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends