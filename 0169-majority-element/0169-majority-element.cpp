class Solution {
public:
    int majorityElement(vector<int>& v) {
          int n=v.size();
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		m[v[i]]++;
	}
	for(const auto it:m)
	{
		if(it.second>(n/2))
		{
			return it.first;
		}
	}
	return -1;  
        
    }
};