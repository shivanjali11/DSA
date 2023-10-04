class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n=a.size();
            if(n==0)
            {
                    return 0;
            }
         unordered_set<int>s;
            int x;
            int count=0;
            int largest=1;
            for(int i=0;i<n;i++)
            {
                    s.insert(a[i]);
            }
            for(auto it:s)
            {
                    if(s.find(it-1)==s.end())
                    {
                          x =it; 
                            count=1;
                            while(s.find(x+1)!=s.end())
                            {      
                                    x=x+1;
                                    count++;
                            }
                               largest=max(largest,count);
                    }
                 
                   
                    
            }
            return largest;
    }
};