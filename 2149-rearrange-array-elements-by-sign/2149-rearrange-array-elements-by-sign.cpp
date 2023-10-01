class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
            int n=a.size();
    vector<int>p;
    vector<int>neg;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            neg.push_back(a[i]);
        }
        else
        p.push_back(a[i]);
        
    }
    vector<int>ne(n,0);
     for(int i=0;i<n/2;i++){
      
      ne[2*i] = p[i];
      ne[2*i+1] = neg[i];
  }
    return ne;
        
    }
};