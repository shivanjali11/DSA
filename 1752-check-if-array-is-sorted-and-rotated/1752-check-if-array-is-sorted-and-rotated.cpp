class Solution {
public:
    bool check(vector<int>& nums) {
            int n=nums.size();
            vector<int>v(n);
            v=nums;
            sort(v.begin(),v.end());
            if(nums==v)
                    return true;
            vector<int>a(n);
            int count=0;
                for(int i=0;v!=nums;i++)
                {
                        int last=v[n-1];
                        a[0]=last;
                        for(int j=1;j<n;j++)
                        {
                             a[j] =v[j-1];  
                        }
                        v.assign(a.begin(),a.end());
                        count++;
                        if(count==n)
                                return false;
                                
                }
                    
            
            if(nums==v)
                    return true;
            else 
                    return false;
            
    }
};