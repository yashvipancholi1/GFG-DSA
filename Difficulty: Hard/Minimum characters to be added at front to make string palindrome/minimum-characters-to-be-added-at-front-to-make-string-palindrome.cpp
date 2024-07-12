//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int minChar(string str){
        //Write your code here
        int n= str.size();
        string s = str+"$";
        reverse(str.begin(), str.end());
        s = s+str;
        int m = s.size();
        vector<int> lps(2*n+1);
        
        lps[0] = 0;
        int i=1;
        int len =0;
        
        while(i<m){
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else {
                if(len!=0){
                    len = lps[len-1];
                }
                else {
                    lps[i]=0;
                    i++;
                }
            }
        }
        return n-lps[m-1];
        
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
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends