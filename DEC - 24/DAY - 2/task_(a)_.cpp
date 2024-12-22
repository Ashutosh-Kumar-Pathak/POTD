/*

Question 136.  Single Number
   Given a non-empty array of integers, in which every element appears twice except for one. Find the single one.

Link : 
      https://leetcode.com/problems/single-number/description/

Example 1: 
     Input :
         nums = [2,2,1]
     Output: 
        1
     Explanation: 
          1 appears single which 2 appers twice

Time Complexity: O(n)
Space Complexity: O(1) 

Constraints:
   1 <= nums.length <= 3 * 10^4
  -3 * 10^4 <= nums[i] <= 3 * 10^4

*/  


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for ( int i=1; i<nums.size(); i++ ) {
              ans = ans ^ nums[i];
        }
        return ans;
    }
};