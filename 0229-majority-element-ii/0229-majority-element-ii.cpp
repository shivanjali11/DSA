class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
            int count1=0;
            int count2=0;
            int ele1;
            int ele2;
            int n=nums.size();
            vector<int>ans;
            for(int i=0;i<n;i++)
            {
                   if(count1==0&&ele2!=nums[i])
                   {
                           count1=1;
                           ele1=nums[i];
                   }
                    else if(count2==0&&ele1!=nums[i])
                    {
                            count2=1;
                            ele2=nums[i];
                    }
                    else if(ele1==nums[i])
                    {
                            count1++;
                    }
                    else if(ele2==nums[i])
                    {
                            count2++;
                    }
                    else
                    {
                            count1--;
                            count2--;
                    }
            }
            int count=0;
            int countt=0;
            
           for(int i=0;i<n;i++)
           {
                   if(ele1==nums[i])
                   {
                           count++;
                   }
                   if(ele2==nums[i])
                   {
                           countt++;
                   }
           }
            if(count>(n/3))
                    ans.push_back(ele1);
            if(countt>(n/3))
                    ans.push_back(ele2);
            return ans;
        
    }
};