/*

Question 750A -  New Year and Hurry
     Limak has n problem to solve taking 5*i minutes for the i-th problem. With 240 - k minutes available before leaving for the party, calculate how many problems he can complete

Link : 
      https://codeforces.com/problemset/problem/750/A

Example 1: 
     Input :
        4 190

     Output: 
        4
     Explanation: 
          In the second sample, Limak can solve all 4 problems in 5 + 10 + 15 + 20 = 50 minutes. At 20:50 he will leave the house and go to the party. He will get there exactly at midnight.

Time Complexity: O(n)
Space Complexity: O(1) 

Constraints:   
   n = (1 ≤ n ≤ 10)
   k = (1 ≤ k ≤ 240)
*/ 



#include<bits/stdc++.h>
using namespace std;

int main () {

ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n, k;
cin >> n >> k;
int cnt = 0;
int timeLeft = 240 - k ;
int timeTaken = 5;
int i = 2;
while ( (cnt < n) && (timeTaken <= timeLeft) ) {
    timeLeft -= timeTaken;
    timeTaken = (5 * i);
    i++;
    
    cnt ++;
}
cout << cnt << endl;

}