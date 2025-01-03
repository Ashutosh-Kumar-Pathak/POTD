/*

Question -  Minimum Platform

       You are given the arrival times arr[] and departure times dep[] of all trains that arrive at a railway station on the same day. Your task is to determine the minimum number of platforms required at the station to ensure that no train is kept waiting.


 Link :  https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
      

Example 1: 
     Input :
        arr[] = [900, 940, 950, 1100, 1500, 1800], dep[] = [910, 1200, 1120, 1130, 1900, 2000]
     Output: 
        3

     Explanation: 
          There are three trains during the time 9:40 to 12:00. So we need a minimum of 3 platforms.

Time Complexity: O(2 n logn + n)
Space Complexity: O(1)  

Constraints:   
     1≤ number of trains ≤ 50000
     0000 ≤ arr[i] ≤ dep[i] ≤ 2359

    
*/ 


class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
         
         
         sort(arr.begin(), arr.end());
         sort(dep.begin(), dep.end());
         int i =0 ;
         int j = 0;
         int cnt = 0;
         int maxi = INT_MIN;
         while ( i  < arr.size() ) {
             if ( arr[i] <= dep[j]) {
                 cnt ++ ;
                 i = i + 1;
             }
             else {
                 cnt --;
                 j ++;
             }
             maxi = max ( maxi, cnt);
         }
         return maxi;
    }
};