class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
            map<int,int>m;
            int n=nums.size();
            int count=0;
            int sum=0;
            m[0]=1;
            for(int i=0;i<n;i++ )
            {
                  sum+=nums[i];  
                    auto it=m.find(sum-k);
                    if(it!=m.end())
                    {
                            count+=it->second;
                    }
                    m[sum]++;
            }
            return count;
        
    }
};