#include<bits/stdc++.h>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
//             this vector stores the permutation of a given array
            int n=nums.size();
//             int fact=1;
//             for(int i=n;i>0;i--)
//             {
//                   fact=fact*(n);  
//             }
//             int times=fact;
//             vector<vectot<int>>v;
//             for(int i=1;i<=times;i++)
//             {
                    
//             }
//             BETTER APPROACH USING C++ FUNCTION
            next_permutation(nums.begin(),nums.end());
            cout<<"[";
            for(int i=0;i<n;i++)
            {
                    cout<<nums[i];
            }
            cout<<"]"<<endl;
        
    }
};