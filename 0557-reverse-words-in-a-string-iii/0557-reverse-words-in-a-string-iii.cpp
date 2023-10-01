#include <string>

class Solution {
public:
    std::string reverseWords(std::string s) {
        int start = 0; // Start of the current word
        int end = 0;   // End of the current word
        int n = s.size();
        
        while (end < n) {
            // Find the end of the current word
            while (end < n && s[end] != ' ') {
                end++;
            }
            
            // Reverse the characters in the current word
            reverseWord(s, start, end - 1);
            
            // Move to the next word
            start = end + 1;
            end = start;
        }
        
        return s;
    }
    
private:
    // Helper function to reverse characters in a word
    void reverseWord(std::string &s, int left, int right) {
        while (left < right) {
            std::swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
