class Solution {
public:
    int majorityElement(vector<int>& nums) {
//             MOORE'S VOTING ALGORITHM
            int count=0;
            int n=nums.size();
            int ind=0;
            for(int i=0;i<n;i++)
            {
                   int ele=nums[ind];
                    if(nums[i]==ele)
                    {
                            count++;
                    }
                    else
                    {
                            count--;
                            if(count==0)
                            {
                                    ind=i+1;
                            }
                    }
                    
                    
            }
            if(count!=0)
            {
                    return nums[ind];
            }
            else
                    return -1;
        
    }
};