//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            int ans=0,temp=1;
            int len = s.length();
    for (int i = len - 1; i >= 0; i--) 
    {
        if (s[i] == '1'){
            ans+=temp;
            ans%=m;
        }
          temp*=2;
          temp%=m;
    }
    return ans;
     }

            //code here
        
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends