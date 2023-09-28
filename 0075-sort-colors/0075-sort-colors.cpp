class Solution {
public:
    void sortColors(vector<int>& nums) {
            int a=0;
            int b=0;
            int c=0;
            int n=nums.size();
            for(int i=0;i<n;i++)
            {
                    if(nums[i]==0)
                            a++;
                    if(nums[i]==1)
                            b++;
                    if(nums[i]==2)
                            c++;
            }
            
            for(int i=0;i<a;i++)
            {
                    nums[i]=0;
            }
             for(int i=a;i<a+b;i++)
            {
                    nums[i]=1;
            }
              for(int i=a+b;i<a+b+c;i++)
            {
                    nums[i]=2;
            }
        
    }
};