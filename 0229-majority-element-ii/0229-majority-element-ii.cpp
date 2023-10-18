class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
           // USING HASHMAP
            int n=nums.size();
            vector<int>ans;
            map<int,int>m;
            for(int i=0;i<n;i++)
            {
                   m[nums[i]]++;

                    if(m[nums[i]]==(n/3)+1)
                    {
                            ans.push_back(nums[i]);
                    }
                    if(ans.size()==2)
                            break;
            }
           
            return ans;
        
    }
};