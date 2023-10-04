class Solution {
public:
    int searchInsert(vector<int>& arr, int m) {
            sort(arr.begin(),arr.end());
	int n=arr.size();
	for(int i=0;i<n;i++)
	{
		if(arr[i]==m)
		{
			return i;
		}
		else {
			if(arr[i]>m)
			{
				return i;
			}

		}
	}
            return n;
        
    }
};