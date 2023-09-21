class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1+=nums[i];  
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
               int ans=sum-sum1;
               return ans; 
            }
        }
       return 0; 
        
    }
};