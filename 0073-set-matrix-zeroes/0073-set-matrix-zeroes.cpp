class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
            int n=a.size();
            int m=a[0].size();
            vector<int>row(n,0);
            vector<int>column(m,0);
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            if(a[i][j]==0)
                            {
                                    row[i]=1;
                                    column[j]=1;
                            }
                    }
            }
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            if(row[i]==1||column[j]==1)
                            {
                                    a[i][j]=0;
                            }
                    }
            }
            
        
    }
};