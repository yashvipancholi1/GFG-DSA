//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int, int> mpp;
        int sum=0;
        int maxl=0;
        for(int i=0;i<N;i++){
            
            sum += A[i];
            
            if(sum == K){
                maxl=max(maxl,i+1);
            }
                int rem = sum-K;
            
                if(mpp.find(rem) != mpp.end()){
                    maxl= max(maxl,i-mpp[rem]);
                }
            
            if(mpp.find(sum) == mpp.end()){
                
            mpp[sum]=i;
            }
        }
        
        return maxl;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends