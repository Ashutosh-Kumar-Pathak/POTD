/*

Question 1952. Three Divisors

       Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.

       An integer m is a divisor of n if there exists an integer k such that n = k * m


 Link :  https://leetcode.com/problems/three-divisors/description/
      

Example 1: 
     Input :
           2
     Output: 
        false

     Explanation: 
          2 has only two divisors: 1 and 2.

Time Complexity: O(n)
Space Complexity: O(1)  

Constraints:   
     1 <= n <= 10^4

    
*/ 


class Solution {
    public:
        bool isThree(int n) {
            int i = 2;
            int cnt = 1;
          
            while ( i < n && cnt <= 2) {
                if ( n % i == 0 ) {cnt ++; i++;}
                else i ++;
            }
            if ( cnt == 2 ) return true;
            else return false;
        }
    };