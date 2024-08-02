//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
      
      int solve(vector<int>& arr, int k){
            int left= 0, right=0, sum=0;
            int cnt=0;
            while(right<arr.size()){
                sum+=arr[right];
                
                while(sum>k){
                    sum-=arr[left];
                    left++;
                }
                cnt+=(right-left+1);
                right++;
                
            }
        
            return cnt;
      }
    int numberOfSubarrays(vector<int>& arr, int N, int target){
        // code here
        return solve(arr, target)-solve(arr,target-1);
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends