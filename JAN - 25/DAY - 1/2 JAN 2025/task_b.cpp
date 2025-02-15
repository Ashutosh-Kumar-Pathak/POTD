/*

Question -  55. Jump Game

        You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

       Return true if you can reach the last index, or false otherwise..


 Link :  https://leetcode.com/problems/jump-game/description/
      

Example 1: 
     Input :
        [2,3,1,1,4]
     Output: 
        true

     Explanation: 
          Jump 1 step from index 0 to 1, then 3 steps to the last index.

Time Complexity: O(n)
Space Complexity: O(1)  

Constraints:   
     1 <= nums.length <= 10^4
     0 <= nums[i] <= 10^5 

    
*/ 


class Solution {
     public:
         bool canJump(vector<int>& nums) {
             int n = nums.size();
             int maxiind = 0;
             for ( int i=0; i<n; i++ ) {
                  if ( i > maxiind) return false;
                  maxiind = max(maxiind, i+nums[i]);
             }
             return true;
         }
     };