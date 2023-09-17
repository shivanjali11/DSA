class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//     by two pointer approach
       int i=0;
       int k=0;
        
        if(nums.size()==1)
        return 1;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
                k=i+1;        
            }
            else if(nums[i]==nums[j])
            {
                if(i==0&&j==(nums.size()-1))
                {
                    return 1;
                }
            }
            
        }
        return k;
    }
};