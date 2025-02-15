/*

Question - 162. Find Peak Element

        A peak element is an element that is strictly greater than its neighbors.

       Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

       You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.


You must write a solution in O(log(m * n)) time complexity.


 Link :  https://leetcode.com/problems/find-peak-element/description/
      

Example 1: 
     Input :
        nums = [1,2,3,1]
     Output: 
        2

     Explanation: 
          3 is a peak element and your function should return the index number 2.

Time Complexity: O(log n)
Space Complexity: O(1)  

Constraints:   
     1 <= nums.length <= 1000
     -2^31 <= nums[i] <= 2^31 - 1
     nums[i] != nums[i + 1] for all valid i.
    
*/ 


class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int ind = 0;
            int n = nums.size();
            if ( n == 2 ) {
                if ( nums[0] > nums[1] ) return 0;
                else return 1;
            }
            if ( n == 1 ) return 0;
            for ( int i = 1; i<n-1; i++ ) {
                 if ( nums[i] > nums[i-1] && nums[i] > nums[i+1]) {
                       ind = i;
                 }
            }
            if ( nums[n-2] < nums[n-1]) return n-1;
            else return ind; 
            // return ind;
        }
    };