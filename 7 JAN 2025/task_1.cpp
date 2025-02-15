/*

Question -  74. Search a 2D Matrix

        You are given an m x n integer matrix matrix with the following two properties:

       Each row is sorted in non-decreasing order.
       The first integer of each row is greater than the last integer of the previous row.
       Given an integer target, return true if target is in matrix or false otherwise.
       
You must write a solution in O(log(m * n)) time complexity.


 Link :  https://leetcode.com/problems/search-a-2d-matrix/description/
      

Example 1: 
     Input :
        matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
     Output: 
        true

     Explanation: 
          3 is present in matrix

Time Complexity: O(log(m * n))
Space Complexity: O(1)  

Constraints:   
     m == matrix.length
     n == matrix[i].length
     1 <= m, n <= 100
     -104 <= matrix[i][j], target <= 104

    
*/ 


class Solution {
    public:
    
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
             int m = matrix.size();
             int n = matrix[0].size();
             if ( target < matrix[0][0] ) return false;
             int i = 0;
              int low = 0;
             int high = n-1;
             if ( matrix[0][0] == target ) return true;
    
             while ( ( (i < m) && matrix[i][0] <= target)) {
    
                if ( matrix[i][0] == target ) return true;
                i++;
                }
            //   if ( i != 0 ) i = i-1;
             while (low <= high ) {
                 int mid = low + ( high - low ) / 2;
                 if ( matrix[i-1][mid] == target ) return true;
                else if ( matrix[i-1][mid] < target ) low = mid + 1;
                 else high = mid - 1;
             }
               return false;
        }
    };