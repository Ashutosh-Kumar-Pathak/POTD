/*

Question - 875. Koko Eating Bananas

       Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

       Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

       Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

       Return the minimum integer k such that she can eat all the bananas within h hours.


 Link :  https://leetcode.com/problems/koko-eating-bananas/description/
      

Example 1: 
     Input :
       piles = [3,6,7,11], h = 8
     Output: 
        4

     Explanation: 
       

Time Complexity: O(log (sum of element))
Space Complexity: O(1)  

Constraints:   
    1 <= piles.length <= 10^4
    piles.length <= h <= 10^9
    1 <= piles[i] <= 10^9
    
*/ 


class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n = matrix.size();
            int m = matrix[0].size();
            int i = 0;
            int j = m-1;
            while ( i < n && j >= 0  ) {
                if ( matrix[i][j] == target ) return true;
                else if ( matrix[i][j] < target ) i ++;
                else j --;
            }
            return false;
        }
    };