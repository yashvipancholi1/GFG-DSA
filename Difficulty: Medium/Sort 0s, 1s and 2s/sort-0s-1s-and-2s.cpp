//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    
    //dutch national flag?
    
    void sort012(int a[], int n)
    {
        // code here 
        int cnt_z=0, cnt_o=0, cnt_t=0;
        
        for(int i=0; i<n; i++){
            if(a[i]==0){
                cnt_z++;
            }
            else if(a[i]==1){
                cnt_o++;
            }
            else{
                cnt_t++;
            }
        }
        
        int ind =0;
        
        for(int i=0; i<cnt_z; i++){
            a[ind++]=0;
        }
        for(int i=0; i<cnt_o; i++){
            a[ind++]=1;
        }
        for(int i=0; i<cnt_t; i++){
            a[ind++]=2;
        }
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends