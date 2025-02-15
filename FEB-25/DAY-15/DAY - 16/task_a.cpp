/*

Question 50. Pow(x, n)
   Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

Link : 
      https://leetcode.com/problems/powx-n/description/

Example 1: 
     Input :
         x = 2.00000, n = 10
     Output: 
        1024.00000
     Explanation: 
          2^10 = 1024

Time Complexity: O(Log(n))
Space Complexity: O(Log(n))   {Due to Recursion depth}  

Constraints:   
   -100.0 < x < 100.0
    -2^31 <= n <= 2^31-1
    n is an integer.
    Either x is not zero or n > 0.
   -10^4 <= x^n <= 10^4

*/  


class Solution {
    public:
        double myPow(double x, int n) {
             if ( n == 0 ) return 1;
             if ( n < 0 ) {
                 x = 1/x;
                 n = -(n+1);
                 return x*myPow(x,n);
    
             } 
             double half = myPow(x,n/2);
             if ( n % 2 == 0 ) return half * half;
             else return half * half * x ; 
        }
    };