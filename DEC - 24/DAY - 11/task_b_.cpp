/*

Question 750A -  Longest Common Prefix 
        Write a function to find the longest common prefix string amongst an array of strings. 
      If there is no common prefix, return an empty string "".

 Link :  https://leetcode.com/problems/longest-common-prefix/
      
      

Example 1: 
     Input :
        ["flower","flow","flight"]
     Output: 
        "fl"

     Explanation: 
          There is "fl" prefix common among the input strings.

Time Complexity: O(nlogn)
Space Complexity: O(1) { size of last string } 

Constraints:   
     1 <= strs.length <= 200
     0 <= strs[i].length <= 200
     strs[i] consists of only lowercase English letters.

    
*/ 


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort ( strs.begin(),strs.end()) ;
        int n = strs.size();
        string str = strs[0];
        string str2 = strs[n-1];
        string ans = "";

        for (int i=0; i<str.size(); i++) {
            if ( str[i] != str2[i]) {
                return ans;
            }
            else {
                ans += str[i];
            }
        }
        return ans;
    }
};