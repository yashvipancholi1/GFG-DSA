//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int minChar(string str){
        //Write your code here
     int n = str.size();
        
        string Str = str+"$";
         reverse(str.begin(),str.end());
        Str = Str+str;
        vector<int>lps(2*n+1);
        lps[0] = 0;
        int i =1;
       int m  = Str.size();
        int len = 0;
        while(i<m){
            if(Str[i] == Str[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len!=0){
                    len = lps[len-1];
                }
                else{
                    
                    lps[i]=0;
                    i++;
                }
            }
        }
        // int a = lps[n-1];
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