/*

Question -  1582B Luntik and Subsequences

        Luntik calls a subsequence of the array a
        nearly full if the sum of the numbers in that subsequence is equal to s−1 Luntik really wants to know the number of nearly full subsequences of the array a. But he needs to come home so he asks you to solve that problem!
        A sequence x is a subsequence of a sequence y if x can be obtained from y by deletion of several (possibly, zero or all) elements.


 Link :  https://codeforces.com/problemset/problem/1582/B
      

Example 1: 
     Input :
        5
        1 2 3 4 5
     Output: 
        1

     Explanation: 
          s=1+2+3+4+5=15, only (2,3,4,5) is a nearly full subsequence among all subsequences, the sum in it is equal to 2+3+4+5=14=15−1

Time Complexity: O(n)
Space Complexity: O(1)  

Constraints:   
     t ( 1 <= t <= 1000 ) - the number of testcases
     n ( 1 <= n <= 60 ) - the length of the array
     ( 0 <= ai <= 10 ^ 9 ) - the element of the array a 

    
*/ 


#include<bits/stdc++.h>
using namespace std;
 
int main () {
 
    int t ;
     cin >> t;
     while ( t-- ) {
     long long n;
     cin >> n;
     long long arr[n];
     long long cnt1 = 0;
     long long cnt0 = 0;
     for ( long long i =0;i<n;i++ ) {cin >> arr[i];
     if ( arr[i] == 1 ) cnt1 ++;
     if ( arr[i] == 0 ) cnt0 ++;
     }
     if ( cnt1 == 0 ) cout << 0 << endl;
       else cout << cnt1 * (1LL << cnt0) << endl;
     }
     return 0;
}