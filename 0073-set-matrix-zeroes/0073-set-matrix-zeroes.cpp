class Solution {
public:
        void row(vector<vector<int>>&a,int i,int m)
        {
                for(int j=0;j<m;j++)
                {
                        if(a[i][j]!=0)
                        {
                                a[i][j]='l';
}
                }
}
        void column(vector<vector<int>>&a,int j,int n)
        {
                for(int i=0;i<n;i++)
                {
                        if(a[i][j]!=0)
                        {
                                a[i][j]='l';
}
                }
}
    void setZeroes(vector<vector<int>>& matrix) {
            int n=matrix.size();
            int m=(n>0)?matrix[0].size():0;
            int count=0;
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            if(matrix[i][j]==0)
                            {
                                    row(matrix,i,m);
                                    column(matrix,j,n);
                            }
                            else
                            count++;
                    }
            }
            if(count==m*n)
            {
                    return ;
            }
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            if(matrix[i][j]=='l')
                            {
                                    matrix[i][j]=0;
                             }
                      }
            }
            
            
        
    }
};