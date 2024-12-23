/*

Question 75.  Pangram String
   Print YES if s string consist all 26 letters at lease once else print NO

Link : 
      https://codeforces.com/problemset/problem/520/A

Example 1: 
     Input :
        35
        TheQuickBrownFoxJumpsOverTheLazyDog

     Output: 
        "YES"
     Explanation: 
          This word contains all the letters from A to Z at lease once 

Time Complexity: O(n)
Space Complexity: O(n) 

Constraints:   
   (1 ≤ n ≤ 100)

*/  


#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    string str;
    cin >> str;
    set<char> s;
    if ( str.length() < 26 ) {
        cout << "NO" << endl;
        return 0;
    }
    for ( int i=0; i<str.length(); i++ ) {
        if ( str[i] < 97 ) {
             s.insert(str[i]+32);
        }
        else s.insert(str[i]);
    }
    if  (s.size() == 26 ) {
        cout << "YES" << endl;
        return 0;
    }
    else {
        cout << "NO" << endl;
        return 0;
    }
    return 0;
}