class Solution {
public:
        vector<int >generateRow(int row)
        {
                vector<int>ans;
                ans.push_back(1);
                int num=1;
                for(int i=1;i<row;i++)
                {
                       num=num*(row-i);
                        num=num/i;
                        ans.push_back(num);
                }
                return ans;
        }
    vector<vector<int>> generate(int row) {
            vector<vector<int>>v;
            for(int col=1;col<=row;col++)
            {
                    v.push_back(generateRow(col));
            }
            return v;
        
    }
};