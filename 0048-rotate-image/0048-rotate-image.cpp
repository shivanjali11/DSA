class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
            int n=matrix.size();
            vector<vector<int>>v(n,vector<int>(n,0));
            for(int j=0;j<n;j++)
            {
                    for(int i=0;i<n;i++)
                    {
                         v[i][j]=matrix[j][i];  
                    }
                
            }
               for(int i=0;i<n;i++)
                    {
                            reverse(v[i].begin(),v[i].end());
                    } 
            matrix=v;
        
    }
};