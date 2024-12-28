/*

Question 750A -  Convert 1D Array into 2D Array
     Task is to convert 1D array into 2D matrix of m rows and n columns

Link : 
      https://leetcode.com/problems/convert-1d-array-into-2d-array/submissions/1490681049/

Example 1: 
     Input :
        [1,2,3,4] m = 2, n = 2

     Output: 
        [[1,2],[3,4]]

     Explanation: 
          The constructed 2D array should contain 2 rows and 2 columns.
          The first group of n=2 elements in original, [1,2], becomes the first row in the constructed 2D array.
          The second group of n=2 elements in original, [3,4], becomes the second row in the constructed 2D array.

Time Complexity: O(m*n)
Space Complexity: O(m*n) ( auxiliary space to return answer matrix) 

Constraints:   
    1 <= original.length <= 5 * 104
    1 <= original[i] <= 105
    1 <= m, n <= 4 * 104

    
*/ 

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if ( m*n != original.size()) return ans;
        
        vector<int>list(n) ;
        for (int i=0; i<m; i++ ) {
            for (int j=0; j<n ; j++ ) {
                // ans.push_back[i][j] = original[j];
                list[j] = original[i*n+j];
            }
            ans.push_back(list);
        }
        return ans;
    }
};