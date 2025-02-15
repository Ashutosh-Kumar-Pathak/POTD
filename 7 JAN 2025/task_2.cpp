/*

Question -  Find nth root of m

        You are given 2 numbers n and m, the task is to find n√m (nth root of m). If the root is not integer then returns -1.


 Link :  https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1
      

Example 1: 
     Input :
      n = 2, m = 9
     Output: 
        3

     Explanation: 
          3^2 = 9.

Time Complexity: O(n log m)
Space Complexity: O(1)  

Constraints:   
     1 <= n <= 30
     1 <= m <= 109

    
*/ 


class Solution {
    public:
      int nthRoot(int n, int m) {
          // Code here.
          long long low = 1;
          long long high = m;
          long long ans = 1; 
          while ( low <= high ) {
               long long mid = low + ( high - low ) / 2;
               if ( pow(mid,n) == m ) return mid;
               if ( pow(mid,n) >m ) high = mid - 1;
               else low = mid + 1;
          }
          return -1;
       }
  };