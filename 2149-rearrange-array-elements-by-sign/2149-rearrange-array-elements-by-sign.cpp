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
    vector<int>ne;
     int k=0;
        int l=0;
    for(int i=0;i<n;i++)
    {
       
        if(i%2==0)
        {
            ne
            .push_back(p[k]);
            k++;
        }
        else
        {
           ne.push_back(neg[l]);
           l++;
        } 
        
    }
    return ne;
        
    }
};