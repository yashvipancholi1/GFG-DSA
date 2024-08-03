//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maxScore(vector<int> &cardPoints, int N, int k) {
        // code here
        return solve(cardPoints, N, k);
    }
    
    long long solve(vector<int>& cardPoints, int n, int k){
        int left =0, right=0;
        long long minSum = INT_MAX;
        long long sum =0;
        int sumofarr=0;
        
        for(int i: cardPoints){
            sumofarr+=i;
        }
        
        if(n-k==0) return sumofarr;
        
        while(right<n){
            sum+=cardPoints[right];
            
            if(right-left+1<n-k){
                right++;
            }
            else if(right-left+1==n-k){
                minSum = min(sum, minSum);
                
                sum-=cardPoints[left];
                
                left++;
                right++;
                
            }
        }
        return sumofarr-minSum;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N >> k;

        vector<int> cardPoints(N);
        for (int i = 0; i < N; i++) cin >> cardPoints[i];

        Solution obj;
        cout << obj.maxScore(cardPoints, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends