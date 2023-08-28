//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
               for(int j=1;j<=n;j++)
             {
                cout<<"*";
             }
             cout<<endl; 
            }
            else if(i<n&&i!=1)
            {
                // star
                cout<<"*";
                // space
                for(int k=0;k<n-2;k++)
                {
                    cout<<" ";
                }
                // star
               cout<<"*";
                cout<<endl;
            }
            else
            {
                for(int j=1;j<=n;j++)
             {
                cout<<"*";
             }
             cout<<endl; 
            }
            
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends