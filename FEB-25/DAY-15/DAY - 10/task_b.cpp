/*

Question 231. Power of Two
   Given an integer n, return true if it is a power of two. Otherwise, return false.

   An integer n is a power of two, if there exists an integer x such that n == 2x.


Link : 
      https://leetcode.com/problems/power-of-two/description/

Example 1: 
     Input :
         n=16
     Output: 
        true
     Explanation: 
          2 ^ 4 = 16

Time Complexity: O(1) 
Space Complexity: O(1) 

Constraints:   
   -2^31 <= n <= 2^31 - 1

*/  


class Solution {
    public:
        bool isPowerOfTwo(int n) {
            // if ((__builtin_popcount(n)) == 1) return true;
            // else return false;
         if ( n == 0 ) return false;
    
            if ( n > 0 && !( n & (n-1))) return true;
            else return false;
        }
    };