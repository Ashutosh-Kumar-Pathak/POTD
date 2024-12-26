/*

Question 750A -  Trailing Zeros
     Task is to calculate the number of trailing zeros in the factorial n!

Link : 
      https://cses.fi/problemset/task/1618/

Example 1: 
     Input :
        20

     Output: 
        4
     Explanation: 
          Value of 20! is = 2432902008176640000 and number of trailing zeroes in it is 4

Time Complexity: O(log 5)
Space Complexity: O(1) 

Constraints:   
    1 <= n <= 10^9 

    
*/ 


#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n; 
    int i = 2;
    int res = 0;
    int r = 5;
    while ( n / r) {
         
        res += (n/r);
        r = pow(5,i);  
        i++;      
    } 
    cout << res << endl; 
}