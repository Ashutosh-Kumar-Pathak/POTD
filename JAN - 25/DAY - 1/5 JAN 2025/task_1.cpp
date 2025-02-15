/*

Question -  441. Arranging Coins

        You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

       Given the integer n, return the number of complete rows of the staircase you will build


 Link :  https://leetcode.com/problems/arranging-coins/description/
      

Example 1: 
     Input :
        n = 5
     Output: 
        2

     Explanation: 
          Because the 3rd row is incomplete, we return 2.

Time Complexity: O(log n)
Space Complexity: O(1)  

Constraints:   
     1 <= n <= 231 - 1

    
*/ 


class Solution {
    public:
        int arrangeCoins(long long n) {
            long long low = 1;
            long long high = n; 
            if ( n == 1 ) return 1 ;
            while ( low <= high ) {
                long long mid = low + ( high - low ) / 2;
                long long sum = mid*(mid+1)/2;
                if ( sum > n ) {
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return high;
        }
    };