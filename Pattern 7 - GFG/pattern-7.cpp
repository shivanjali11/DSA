//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n-i-1;k++)
            {
                cout<<" ";
            }
            
            for(int j=1;j<=2*i+1;j++)
            {
                cout<<"*";
            }
            for(int r=0;r<n-i-1;r++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends