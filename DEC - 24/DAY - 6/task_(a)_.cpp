/*

Question 750A -  Number of Laser Beans in a Bank
     Task is to calculate the number of trailing zeros in the factorial n!

Link : 
      https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/

Example 1: 
     Input :
        ["011001","000000","010100","001000"]

     Output: 
        8

     Explanation: 
          Between each of the following device pairs, there is one beam. In total, there are 8 beams:
           * bank[0][1] -- bank[2][1]
           * bank[0][1] -- bank[2][3]
           * bank[0][2] -- bank[2][1]
           * bank[0][2] -- bank[2][3]
           * bank[0][5] -- bank[2][1]
           * bank[0][5] -- bank[2][3]
           * bank[2][1] -- bank[3][2]
           * bank[2][3] -- bank[3][2]
             Note that there is no beam between any device on the 0th row with any on the 3rd row.
             This is because the 2nd row contains security devices, which breaks the second condition.

Time Complexity: O(n)
Space Complexity: O(1) 

Constraints:   
    m == bank.length
    n == bank[i].length
    1 <= m, n <= 500
    bank[i][j] is either '0' or '1'.

    
*/ 

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int p = 0, t = 0;
        for (int i = 0; i < bank.size(); i++) {
            int c = count(bank[i].begin(), bank[i].end(), '1');
            if (c > 0) {
                t += p * c;
                p = c;
            }
        }
        return t;
    }
};