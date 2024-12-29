/*

Question 750A -  Almost Prime
     A number is called almost prime if it has exactly two distinct prime divisors. 

Link : 
      https://codeforces.com/problemset/problem/1843/B

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

int main () {

    ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

    int t;
    cin >> t;
    while ( t-- ) {
        long long n;
        cin >> n;
        vector<long long> arr(n); 
         
        for ( long long i=0; i<n; i++ ){
            long long u;
               cin >> u;
               arr[i] = u;
        }
        // if ( n == 1 && arr[0] == 0 ) {cout << 0 << " " << 0 << endl; continue;}
        long long cnt = 0;
        long long sum = 0;
    
        for  ( long long i=1; i<n; i++ ) {
            if ( arr[i] <= 0 ) {
                sum = sum - arr[i];
            }
            else {
                if ( arr[i-1] <= 0 ) cnt ++;
                sum = sum + arr[i];
            }
        }
        sum += (arr[0]<=0)? -arr[0]: arr[0];
        if ( sum == 0 ) cnt = 0;
        else
        cnt += (arr[n-1] <= 0)? 1 : 0 ;
         
        cout << sum << " " << cnt << endl;
    }
    return 0;
}