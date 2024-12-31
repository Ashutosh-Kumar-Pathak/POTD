/*

Question 750A -  Reverse Words in a String  
        A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
        Return a string of the words in reverse order concatenated by a single space


 Link :  https://leetcode.com/problems/reverse-words-in-a-string/description/
      

Example 1: 
     Input :
        "  hello     world  "
     Output: 
        "world hello"

     Explanation: 
          Your reversed string should not contain leading or trailing spaces.

Time Complexity: O(n)
Space Complexity: O(1)  

Constraints:   
     1 <= s.length <= 104
     s contains English letters (upper-case and lower-case), digits, and spaces ' '.
     There is at least one word in s.

    
*/ 

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int i = 0;
        int right = 0;
        int left = 0;
        while ( i < n ) {
            while ( s[i] == ' ') i ++;
            if ( i == n ) break;
            while ( i < n && s[i] != ' ') {
                s[right] = s[i];
                i ++ ;
                right ++ ;
            }
            reverse(s.begin()+left , s.begin()+right);
            s[right] = ' ';
            right ++;
            left = right;
            i++;
        }
        s.resize(right - 1);
        return s;
    }
};