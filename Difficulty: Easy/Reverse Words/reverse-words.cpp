//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans;
        vector<string> store;
        
        for(int i=0; i<S.size(); i++){
            if(S[i]=='.'){
                store.push_back(ans);
                ans="";
            }
            else{
                ans+=S[i];
            }
        }
        store.push_back(ans);
        ans="";
        
        for(int i=store.size()-1; i>=0; i--){
            
            ans+=store[i];
            if(i!=0){
                ans+=".";
            }
            
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends