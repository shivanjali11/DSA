class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>p;
        vector<int>r;
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            if(p.find(diff)!=p.end())
            {
                auto itr=p.find(diff);
                r.push_back(itr->second);
                r.push_back(i);
            }
            p.insert(make_pair(nums[i],i));
        }
        return r;
    }
};