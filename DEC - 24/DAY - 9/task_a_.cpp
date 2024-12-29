/*

Question 750A -  Almost Prime
     A number is called almost prime if it has exactly two distinct prime divisors. 

Link : 
      https://codeforces.com/problemset/problem/26/A

Example 1: 
     Input :
        10

     Output: 
        2

     Explanation: 
          2 numbers 6 and 10 who has exactly 2 distinct prime factor;

Time Complexity: O(2 root n * n)
Space Complexity: O(1) 

Constraints:   
     n = (1 ≤ n ≤ 3000).

    
*/ 


#include<bits/stdc++.h>
using namespace std;

    

bool isPrime(int n) {
    if ( n >= 2) {
    for ( int i=2; i*i<=n; i++ ) {
        if ( n % i == 0 ) return false; 
    }
    return true;
    }
    else return false;
}

  int noOfPrimeFactor(int n) {
    int cnt = 0;
       for (int i=2; i*i<=n; i++ ) {
          if ( n % i == 0 ) {
            cnt++;
            while ( n % i == 0 ) {
                n = n / i;
            }
          } 
       }
       if ( isPrime(n))
        cnt ++;

        return cnt;

  }

int main () {

   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

     int n;
     cin >> n; 
     int cnte = 0;
     if (n <= 1 ) {cout << cnte << endl; return 0;}
     for ( int i=2; i<=n; i++ ) {
        if ( noOfPrimeFactor(i) == 2 )
            cnte ++;
     }
     cout << cnte ;
     return 0;
}