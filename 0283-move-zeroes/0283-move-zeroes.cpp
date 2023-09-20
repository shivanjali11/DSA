class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        int count=0;
        for(int k=0;k<n;k++ )
        {
            if(nums[k]==0)
            {
                j=k;
                i=j+1;
                break;
            }
            count++;
            
        }
        
        for(int k=i;k<n;k++)
        {
            if(count==n)
                break;
            if(nums[k]!=0)
            {
                swap(nums[k],nums[j]);
                j++;
            }
            else
            {
                continue;
            }
        }
        
    }
};