class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
//             to skip the non alphanumeric characters and check also for left<right and increment the left until it encounter alphanumeric characters
            while(left<right&& !isalnum(s[left]))
            {
                left++;
            }
//             same concept
             while(left<right&& !isalnum(s[right]))
            {
                right--;
            }
            if(tolower(s[left])!= tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;
        
    }
};