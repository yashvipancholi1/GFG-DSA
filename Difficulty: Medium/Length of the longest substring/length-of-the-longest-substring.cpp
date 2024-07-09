//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        
        vector<int> mpp(26, 0);
        
        int left =0, right = 0;
        int len = 0;
        int n = S.length();
        
        while(right<n){
            if(mpp[S[right]-'a']==0){
                len = max(len, right-left+1);
                mpp[S[right++]-'a']++;
            }
            else{
                mpp[S[left++]-'a']--;
            }
            
        }
        return len;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends