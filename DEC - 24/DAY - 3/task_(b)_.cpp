/*

Question 2027.  Minimum Moves to Convert String

   Given a string s consisting of n characters which are either 'X' or '0'. A move is defined as selecting three consecutive characters of s and converting them to 'O'. Note that if a move is applied to the character 'O', it will stay the same.

Link : 
      https://leetcode.com/problems/minimum-moves-to-convert-string/description/

Example 1: 
     Input :
         nums = "XX0X"
     Output: 
        2
     Explanation: 
          XXOX -> OOOX -> OOOO
           We select the first 3 characters in the first move, and convert them to 'O'.
           Then we select the last 3 characters and convert them so that the final string contains all 'O's.

Time Complexity: O(n)
Space Complexity: O(1) 

Constraints:
   3 <= s.length <= 1000
   s[i] is either 'X' or 'O'.

*/ 


class Solution {
public:
    int minimumMoves(string s) {
        int n = s.length();
        int cnt = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == 'X') {
                cnt++;
                s[i] = 'O';
                if (i + 1 < n) s[i + 1] = 'O';
                if (i + 2 < n) s[i + 2] = 'O';
                i += 3;
            } else {
                i++;
            }
        }
        return cnt;
    }
};
