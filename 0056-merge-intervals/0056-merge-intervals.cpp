class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
            int n=arr.size();
            vector<vector<int>>ans;
            sort(arr.begin(),arr.end());
            for(int i=0;i<n;i++)
            {
//                     interval only creates when either ans would be empty or if not overlapping condition occurs
                    if(ans.empty()||ans.back()[1]<arr[i][0])
                    {
//                      push the new pair in the vector
                         ans.push_back(arr[i]);   
                    }
                    else
                    {
                           if(ans.back()[1]<arr[i][1])
                           {
                                   ans.back()[1]=arr[i][1];
                           }
                    }
            }
            return ans;
    }
};