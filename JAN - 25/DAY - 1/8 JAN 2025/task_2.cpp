/*

Question -  153. Find Minimum in Rotated Sorted Array

        Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

       [4,5,6,7,0,1,2] if it was rotated 4 times.
       [0,1,2,4,5,6,7] if it was rotated 7 times.


 Link :  https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
      

Example 1: 
     Input :
        nums = [3,4,5,1,2]
     Output: 
        1

     Explanation: 
          The original array was [1,2,3,4,5] rotated 3 times.

Time Complexity: O(log n)
Space Complexity: O(1)  

Constraints:   
     n == nums.length
     1 <= n <= 5000
     -5000 <= nums[i] <= 5000
     All the integers of nums are unique.
     nums is sorted and rotated between 1 and n times.

    
*/ 


class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n = nums.size();
            int low = 0;
            int high = n - 1;
            int mini = INT_MAX;
    
            while ( low <= high ) {
                  int mid = low + ( high - low ) / 2;
                  if ( nums[low] <= nums[mid]) {
                       mini = min(nums[low], mini);
                       low = mid + 1;
                  }
                  else {
                    mini = min(mini, nums[mid]);
                    high = mid - 1;
                  }
            }
            return mini;
        }
    };