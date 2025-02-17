/*

Question -  Floor in a Sorted Array

        Given a sorted array arr[] (with unique elements) and an integer k, find the index (0-based) of the largest element in arr[] that is less than or equal to k. This element is called the "floor" of k. If such an element does not exist, return -1


 Link :  https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
      

Example 1: 
     Input :
        arr[] = [1, 2, 8, 10, 11, 12, 19], k = 0
     Output: 
        -1

     Explanation: 
          No element less than 0 is found. So output is -1.

Time Complexity: O(log n)
Space Complexity: O(1)  

Constraints:   
     1 ≤ arr.size() ≤ 106
     1 ≤ arr[i] ≤ 106
     0 ≤ k ≤ arr[n-1]

    
*/ 


class Solution {
    public:
  
      int findFloor(vector<int>& arr, int k) {
  
          // Your code here
          int n = arr.size();
          int low = 0;
          int high = n-1;
          int ans = -1;
          while ( low <= high ) {
              int mid = low + ( high - low) / 2;
              if ( arr[mid] <= k ) {ans = mid; low = mid  + 1;}
              // else if ( arr[mid] > k ) high = mid - 1;
              else high  = mid - 1;
          }
          return ans;
      }
  };