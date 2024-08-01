//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
         int left=0,right=0;
        vector<int>m(26);
        int n=S.length();
        int len=0;
        while(right<n){
            m[S[right]-'a']++;
            if(m[S[right]-'a']==1) len=max(len,right-left+1);
            while(m[S[right]-'a']>1 and left<=right){
                m[S[left]-'a']--;
                left++;
            }
            right++;
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