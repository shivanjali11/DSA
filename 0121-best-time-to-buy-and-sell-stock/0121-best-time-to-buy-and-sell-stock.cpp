class Solution {
public:
    int maxProfit(vector<int>& a) {
             int n=a.size();
    int low=0;
    int high=1;
    int profit;
    int maxi=0;
   while(high<n)
   {
       if(a[low]<a[high])
       {
           profit=a[high]-a[low];
           maxi=max(maxi,profit);
           
           

       }
       else
       low=high;
           high++;
   }
   return maxi;
        
    }
};