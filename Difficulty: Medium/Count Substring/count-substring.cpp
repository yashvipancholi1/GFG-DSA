//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int cnt_a=0, cnt_b=0, cnt_c=0;
        int left =0, right=0, ans =0;
        int n = s.size();
        int total = n*(n+1)/2;
        
        while(right<s.size()){
            if(s[right]=='a') cnt_a++;
            if(s[right]=='b') cnt_b++;
            if(s[right]=='c') cnt_c++;
            
            while(cnt_a && cnt_b && cnt_c){
                if(s[left]=='a') cnt_a--;
                if(s[left]=='b') cnt_b--;
                if(s[left]=='c') cnt_c--;
                
                left++;
            }
            ans +=right-left+1;
            right++;
        }
        return total-ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends