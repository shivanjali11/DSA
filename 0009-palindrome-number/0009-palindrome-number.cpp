class Solution {
public:
    bool isPalindrome(int x) {
       long int rev=0;
        long int n=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            int rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(n==rev)
        {
           return true;
        }
        else
        {
            return false;
        }
        
        
    }
};