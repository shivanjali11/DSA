class Solution {
public:
    int maxProfit(vector<int>& a) {
      
    // Write your code here.
    int n=a.size();
    int low=0;
    int high=1;
    int profit=0;
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