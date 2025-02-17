/*

Question - 1011. Capacity To Ship Packages Within D Days

        A conveyor belt has packages that must be shipped from one port to another within days days.

        The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

        Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.


 Link :  https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
      

Example 1: 
     Input :
        weights = [1,2,3,4,5,6,7,8,9,10], days = 5
     Output: 
        15

     Explanation: 
          A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
          1st day: 1, 2, 3, 4, 5
          2nd day: 6, 7
          3rd day: 8
          4th day: 9
          5th day: 10

          Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.

Time Complexity: O(log (sum of element))
Space Complexity: O(1)  

Constraints:   
    1 <= days <= weights.length <= 5 * 104
    1 <= weights[i] <= 500.
    
*/ 


class Solution {
    public:
    
      int cntsum ( vector<int> &weights) {
        int n = weights.size();
           int sum =0;
           for ( int i=0; i<n; i++ ) sum += weights[i];
           return sum;
      }
    
      int maxele ( vector<int> &weights ) {
        int n = weights.size();
          int maxi = INT_MIN;
          for ( int i=0; i<n; i++ ) maxi = max(maxi, weights[i]);
          return maxi;
      }
    
      int capacity ( vector<int> &weights, int mid, int days ) {
           int n = weights.size();
           int sum = 0;
           int cntday = 0;
           for  ( int i=0; i<n; i++ ) {
            sum += weights[i];
                if ( sum > mid ) {
                    cntday ++;
                    sum = weights[i];
                }
           }
           return (cntday+1) <= days ;
      }
    
        int shipWithinDays(vector<int>& weights, int days) {
             int n = weights.size();
             int low = maxele(weights);
             int high = cntsum(weights);
             while ( low <= high ) {
                 int mid = low + ( high - low ) / 2;
                 if ( capacity(weights, mid, days)) 
                 high = mid - 1;
                 else low = mid + 1;
    
             }
             return low;
             
        }
    };