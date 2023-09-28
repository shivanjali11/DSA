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
            for(int i=0;i<n;i++)
            {
                    if(i<a&&i>=0)
                    {
                            nums[i]=0;
                    }
                    if(i<a+b&&i>=a)
                    {
                            nums[i]=1;
                    }
                    if(i<a+b+c&&i>=a+b)
                    {
                            nums[i]=2;
                    }
            }
            // for(int i=0;i<a;i++)
            // {
            //         nums[i]=0;
            // }
            //  for(int i=a;i<a+b;i++)
            // {
            //         nums[i]=1;
            // }
            //   for(int i=b;i<a+b+c;i++)
            // {
            //         nums[i]=2;
            // }
        
    }
};