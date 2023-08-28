//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++)
        {
            // spaces
            for(int j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            char ch='A';
            for(int j=0;j<=i;j++)
            {
                cout<<ch++;
            }
            ch--;
            for(int j=0;j<i;j++)
            {
                cout<<--ch;
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