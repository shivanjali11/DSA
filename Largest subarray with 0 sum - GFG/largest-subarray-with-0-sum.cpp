//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    { 
	int maxlen=0;
	int sum=0;
	int len=0;
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum==0)
		{
			maxlen=max(maxlen,i+1);
		}
		else if(m.find(sum)!=m.end())
		{
			len=i-m[sum];
			maxlen=max(maxlen,len);

		}
		else if(m.find(sum)==m.end())
		{
            if(sum!=0)
			{
				m[sum]=i;
			}
		}
		
	}

	return maxlen;
        // Your code here
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends