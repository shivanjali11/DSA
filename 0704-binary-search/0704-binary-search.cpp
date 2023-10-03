class Solution {
public:
    int search(vector<int>& nums, int target) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            int mid=0;
            while(low<=high)
            {
                     mid=(low+high)/2;
                    if(target>nums[mid])
                    {
                            low=mid+1;
                    }
                    if(target<nums[mid])
                    {
                            high=mid-1;
                    }
                    if(target==nums[mid])
                    {
                            return mid;
                    }
            }
            return -1;
        
    }
};