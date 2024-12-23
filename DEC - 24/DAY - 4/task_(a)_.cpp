/*

Question 75.  Sort Color
   Given an array with n object colored red, white or blue sort them in-place so that same color object are adjacent with the colors in the order red, white and blue

Link : 
      https://leetcode.com/problems/sort-colors/description/

Example 1: 
     Input :
         nums = [2,0,2,1,1,0]
     Output: 
        [0,0,1,1,2,2]
     Explanation: 
          Same color will come together

Time Complexity: O(n)
Space Complexity: O(1) 

Constraints:   
   n == nums.length
   1 <= n <= 300
   nums[i] is either 0, 1, or 2.

*/  


// BRUTE approach  -=  is by traversing whole array and count each element and then run loop to rewrite the no. of object.  TC = O(2N) and SC = O(N);

// BETTER APPROACH  -= USING HASH MAP

// OPTIMAL APPROACH  -=  DUTCH FLAG ALGORTIHM  ( TC = O(N) ) 


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, mid = 0, h = nums.size() - 1;
          for ( int i=0; i<nums.size(); i++ ) {
            while ( mid <= h ) {
                 if ( nums[mid] == 0 ) {
                swap(nums[mid], nums[l]) ;
                l++;
                mid ++;
            }
            else if ( nums[mid] == 1 ) {
                mid ++;
            }
            else {
                swap ( nums[mid], nums[h]);
                h--;
            }
            }    
          }
    }
};