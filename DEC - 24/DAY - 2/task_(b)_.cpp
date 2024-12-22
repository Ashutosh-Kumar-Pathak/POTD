/*

Question 3l90.  Find Minimum Opertion to Make All Elements Divisible by Three

Link : 
      https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/

Example 1: 
     Input :
         nums = [1,2,3,4]
     Output: 
        3
     Explanation: 
          All array elements can be made divisible by 3 using 3 operations:
             Subtract 1 from 1.
             Add 1 to 2.
             Subtract 1 from 4.

Time Complexity: O(n)
Space Complexity: O(1) 

Constraints:
   1 <= nums.length <= 50
   1 <= nums[i] <= 50

*/  

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int  cnt = 0;
        for ( int i=0; i<nums.size(); i++ ) {
            if ( nums[i] % 3 != 0)  cnt ++;
            else if ( nums[i] % 3 == 1 ) nums[i] -= 1;
            else nums[i] += 1;
        }
        return cnt;
    }
};
