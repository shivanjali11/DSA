class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int j;
        for (int i = 0; i <= n; i++) 
        {
            
            int count = 0;
            for (j = 0; j < n; j++) {
                if (i == nums[j]) {
                    count = 1;
                    break;
                }
            }
            if (j == n && i == n) {
                return n;
            }
            if (count == 0) {
                return i;
            }
        }
        return -7;
    }
};
