class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Ensure k is within the range [0, n)
        
        // Reverse the entire vector
        reverse(nums.begin(), nums.end());
        
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the remaining n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};
