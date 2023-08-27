//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        int l=1;
        for(int i=1;i<=2*n-1;i++)
        {
            if(i<=n)
            {
                for(int j=0;j<i;j++)
                {
                    cout<<"* ";
                }
                cout<<endl;
            }
            else
            {
                for(int k=0;k<i-2*l;k++)
                {
                    cout<<"* ";
                }
                cout<<endl;
                l++;
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends