class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
            int n=nums.size();
            int num=n/3;
            vector<int>ans;
            int count=0;
            for(int i=0;i<n;i++)
            {
                    count=0;
                    if(find(ans.begin(),ans.end(),nums[i])==ans.end())
                    {
                          for(int j=0;j<n;j++)
                         {
                                    
                           if(nums[i]==nums[j])
                           {
                                   count++;
                            }
                                      
                          }     
                    }
                            
                 
                    if(count>num)
                    {
                            ans.push_back(nums[i]);
                    }
            }
            return ans;
        
    }
};