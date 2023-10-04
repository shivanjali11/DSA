class Solution {
public:
    int longestConsecutive(vector<int>& a) {
            int n=a.size();
            sort(a.begin(),a.end());
            int count=0;
            int smallercount=INT_MIN;
            int largest=1;
            if(n==0)
                    return 0;
            for(int i=0;i<n;i++)
            {
                    if((a[i]-1)==smallercount)
                    {
                            count++;
                            smallercount=a[i];
                    }
                    else if(a[i]==smallercount)
                    {
                           
                    }
                    else if((a[i]-1)!=smallercount)
                    {
                            count=1;
                            smallercount=a[i];
                            
                    }
                    largest=max(largest,count);
                    
            }
            return largest;
        
    }
};