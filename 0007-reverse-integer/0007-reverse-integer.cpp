class Solution {
public:
    int reverse(int x)
{
         int rev=0;
    int n=abs(x);
    while(n>0)
    {
       int rem=n%10;
//this is the condition to check for every iteration that value of rev is in the range of 32 bit signed integer
//         INT_MAX is the highest positive value in the 32 bit signed integer
//         INT_MIN is the most negative value in the 32 bit signed integer
       if(rev>INT_MAX/10||rev<INT_MIN/10)
           return 0;
        rev=rev*10+rem;
        n=n/10;
    }
    if(x<0)
    {
        return -rev;
    }
    return rev;
    }
};
    
        
    