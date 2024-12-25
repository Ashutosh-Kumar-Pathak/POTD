/*

Question 455.  Assign Cookies
     Each child has a greed factor g[i], and each cookies has a size s[j]. Assign cookies such that s[j] >= g[i] to maximise the number of content children

Link : 
      https://leetcode.com/problems/assign-cookies/description/

Example 1: 
     Input :
        g = [1,2,3] and s = [1,1]

     Output: 
        1
     Explanation: 
          You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
          And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
          You need to output 1

Time Complexity: O(n log n)
Space Complexity: O(1) 

Constraints:   
   1 <= g.length <= 3 * 104
   0 <= s.length <= 3 * 104
   1 <= g[i], s[j] <= 231 - 1

*/  


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt = 0;
        int i = 0;
        int j = 0;
        while ( i < g.size() && j < s.size()) {
            if ( g[i] <= s[j]) {
                cnt++;
                i++;
                j++;
            }
            else j++;
        }
        return cnt;
    }
};