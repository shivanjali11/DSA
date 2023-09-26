class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int>m;
            vector<int>v;
            for(int i=0;i<nums.size();i++)
            {
                    int diff=target-nums[i];
                    if(m.find(diff)!=m.end())
                       {
                               auto it=m.find(diff);
                               v.push_back(it->second);
                               v.push_back(i);
                       }
                       m.insert(make_pair(nums[i],i));
            }
             return v;
        
    }
                      
};