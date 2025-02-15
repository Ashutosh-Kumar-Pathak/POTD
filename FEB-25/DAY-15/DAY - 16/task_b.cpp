/*

Question 1922. Count Good Numbers
   A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7)

Link : 
      https://leetcode.com/problems/count-good-numbers/description/

Example 1: 
     Input :
         x = 1
     Output: 
        5
     Explanation: 
          The good numbers of length 1 are "0", "2", "4", "6", "8".

     Time Complexity: O(Log(n))
     Space Complexity: O(Log(n))   {Due to Recursion depth} 

Constraints:   
   1 <= n <= 1015

*/  


class Solution {
    public:
    
    const long long MOD = 1e9 + 7; 
    
        long long power ( long long n, long long a ) {
             if (a == 0 ) return 1;
             long long half = power ( n, a/2) ;
             if ( a % 2  == 0 ) 
             return ((half % MOD) * ( half % MOD )) % MOD  ;
             else 
              return ((half % MOD) * ( half % MOD ) * n ) % MOD ;
        }
    
        int countGoodNumbers(long long n) {
            //  long long ans ;
             long long even  = 1;
             long long odd = 1;
             if ( n % 2 == 0 ) {
                 even = power(5,n/2);
                 odd = power ( 4,n/2);
       
             }
             else {
                even = power(5,(n+1)/2);
                odd = power(4,n/2);
              
             }
               return even*odd%MOD ;
        }
    };