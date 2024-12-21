/*

Question.  GCD of two numbers
   Given two positive integers a and b, find GCD of a and b.

Link : 
      https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

Example 1: 
     Input :
         a = 3
         b = 6
     Output: 
        3
     Explanation: 
          GCD of 3 and 6 is 3

Time Complexity: O(log(min(a,b)))
Space Complexity: O(1) 

Constraints:
    1 ≤ a, b ≤ 109

*/ 

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  int findgcd ( int a , int b) {
      if ( a % b == 0  )  return b;
      return findgcd ( b , a % b);
  }
  
    int gcd(int a, int b) {
        if ( a > b ) return findgcd(a,b);
        else return findgcd(b,a);
    }
};

/*
 My code Complexity 
        Time Complexity: O(log(min(a,b)))
        Space Complexity: O(1)
*/ 
