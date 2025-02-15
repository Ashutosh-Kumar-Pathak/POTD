/*

Question -  55. Jump Game

        Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.


 Link :  https://leetcode.com/problems/binary-search/description/
      

Example 1: 
     Input :
        nums = [-1,0,3,5,9,12], target = 9
     Output: 
        4

     Explanation: 
          9 exists in nums and its index is 4

Time Complexity: O(log n)
Space Complexity: O(1)  

Constraints:   
     1 <= nums.length <= 10^4
     -104 < nums[i], target < 104
      All the integers in nums are unique.
      nums is sorted in ascending order.

    
*/ 


class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int l = 0;
            int h = n - 1;
            while ( l <= h ) {
                int m = l + ( h - l ) / 2 ;
                if ( nums[m] == target ) return m;
                 if ( nums[m] > target ) {
                     h = m - 1;
                    
                }
                else l = m + 1;
             }
             return -1;
        }
    };