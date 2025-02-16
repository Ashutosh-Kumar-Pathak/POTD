/*

Question 7. Reverse Integer
   Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Link : 
      https://leetcode.com/problems/reverse-integer/

Example 1: 
     Input :
         n=-123
     Output: 
        -321
     Explanation: 
          

Time Complexity: O(no of digits of N) 
Space Complexity: O(1) 

Constraints:   
   -2^31 <= x <= 2^31 - 1

*/  


class Solution {
    public:
        int reverse(int x) {
            long long num = x;
            // int num = abs(x);
            long long rev = 0;
            while ( num != 0 ) {
                rev = ((rev*10) + (num%10));
                num = num/10;
            }
            if ( rev > INT_MAX || rev < INT_MIN ) 
        //   if(num<0) return -rev ;
           return 0;
           else return rev;
        }
    };