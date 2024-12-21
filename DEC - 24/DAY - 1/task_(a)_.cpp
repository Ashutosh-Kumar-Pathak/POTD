/*

Question 3110.  Score of a String
   Given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

Link : 
      https://leetcode.com/problems/score-of-a-string/description/

Example 1: 
     Input :
         s = "hello"
     Output: 
        13
     Explanation: 
          The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.

Time Complexity: O(n)
Space Complexity: O(1) 

Constraints:
    2 <= s.length <= 100
    s contains only lowercase english letters.

*/      

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for ( int i = 1; i<s.length(); i++ ) {
           sum += abs(s[i] - s[i-1]) ;
        }
        return sum;
    }
};

/*
 My code Complexity 
        Time Complexity: O(n)
        Space Complexity: O(1)
*/ 

