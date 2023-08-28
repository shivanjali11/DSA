//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int k=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            for(int j=0;j<2*n-2*i;j++)
            {
                cout<<" ";
            }
            for(int j=i;j>=1;j--)
            {
                cout<<"*";
            }
            cout<<endl;
            k++;
        }
        for(int i=n-1;i>=1;i--)
        {
            for(int j=0;j<i;j++)
            {
                cout<<"*";
            }
            for(int j=0;j<k-i;j++)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
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