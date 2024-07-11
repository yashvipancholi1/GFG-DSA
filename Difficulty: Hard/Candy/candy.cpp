//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        // code here
        int sum =1, i=1;
        
        while(i<N){
            if(ratings[i]==ratings[i-1]){
                sum = sum+1;
                i++;
                continue;
            }
            int peak=1;
            while(i<N && ratings[i]>ratings[i-1]){
                peak+=1;
                sum+=peak;
                i++;
            }
            int down =1;
            while(i<N && ratings[i]<ratings[i-1]){
                sum+=down;
                down+=1;
                i++;
            }
            if(down>peak){
                sum+=down-peak;
            }
            
        }
        
        return sum;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends