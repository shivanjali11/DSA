class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        int i=0;
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int size=arr.size();
        
        while(i<size)
        {
            int count=1;
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                else{
                    break;
                }
            }
            ans.push_back(count);
            i=i+count;
            
        }
        size=ans.size();
        sort(ans.begin(),ans.end());
        for(i=0;i<size-1;i++)
        {
            if(ans[i]==ans[i+1])
            {
                return false;
            }
        }
        return true;
        
    }
};