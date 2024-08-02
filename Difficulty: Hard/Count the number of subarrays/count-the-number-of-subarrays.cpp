//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long count(int N, vector<int>& A, long R) {
        // code here
        
        long long sum=0;
        int left =0, right=0;
        long long cnt =0;
        while(right<N){
            sum+=A[right];
            
            while(sum>R){
                sum-=A[left];
                left++;
                
            }
            
            cnt+=right-left+1;
            right++;
            
            
        }
        return cnt;
        
        
    }
    
    long long countSubarray(int N,vector<int> A,long long L,long long R){
        long long ans1=count(N,A,R);
        long long ans2 = count(N,A, L-1);
        
        return ans1-ans2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends