/*

Question -  35. Search Insert Position

        Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.


 Link :  https://leetcode.com/problems/search-insert-position/description/
      

Example 1: 
     Input :
        nums = [1,3,5,6], target = 5
     Output: 
        2

     Explanation: 
          

Time Complexity: O(log n)
Space Complexity: O(1)  

Constraints:   
     1 <= nums.length <= 104
     -104 <= nums[i] <= 104
     nums contains distinct values sorted in ascending order.
     -104 <= target <= 104

    
*/ 


class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int n = nums.size();
            int low = 0;
            int high = n-1;
            int ans = -1;
            while ( low <= high ) {
                int mid = low + ( high - low ) / 2;
                if ( nums[mid] >= target ) {ans = mid ; high = mid - 1;}
                else low = mid + 1;
            }
            if ( ans == -1 ) {
                if ( target > nums[n-1] ) return n;
            }
            else if ( ans == -1 ) {
                if ( target < nums[0] ) return 0;
            }
             return ans;
        }
    };