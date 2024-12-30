/*

Question 750A -  Product of array except self 
     A number is called almost prime if it has exactly two distinct prime divisors. 

Link : 
      Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

Example 1: 
     Input :
        [1,2,3,4]

     Output: 
        [24,12,8,6]

     Explanation: 
          

Time Complexity: O(n)
Space Complexity: O(1) 

Constraints:   
     2 <= nums.length <= 105
     -30 <= nums[i] <= 30
      The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

    
*/ 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();
         long long pro = 1;
         int prozero = 1;
         int cntzero = 0;
         for ( int i=0; i<n; i++ ) {
            if ( nums[i] == 0 ) {
               cntzero ++;
                prozero *= 0;
                continue;
            }
            pro *= nums[i];
         }
         for ( int i=0; i<n ;i++ ) {
             if ( cntzero > 1 ) nums[i] = 0;
             else if ( cntzero == 1 ) {
                if ( nums[i] != 0 ) nums[i] = 0;
                else nums[i] = pro;
             }
             else {
                nums[i] = pro / nums[i];
             }
         }
            return nums;
    }
};