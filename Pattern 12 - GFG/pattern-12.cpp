//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
           for (int i = 1; i <= n; i++) {
        // Print the left side numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        // Print the spaces in the middle
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << "  "; // Two spaces for formatting
        }
        
        // Print the right side numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
            if (j > 1) {
                cout << " ";
            }
        }
        
        cout << endl;
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