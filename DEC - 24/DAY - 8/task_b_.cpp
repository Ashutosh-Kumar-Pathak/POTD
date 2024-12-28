/*

Question 750A -  Permutation Swap
     Task is to convert 1D array into 2D matrix of m rows and n columns

Link : 
      https://codeforces.com/problemset/problem/1828/B

Example 1: 
     Input :
        [1,2,3,4] m = 2, n = 2

     Output: 
        [[1,2],[3,4]]

     Explanation: 
          The constructed 2D array should contain 2 rows and 2 columns.
          The first group of n=2 elements in original, [1,2], becomes the first row in the constructed 2D array.
          The second group of n=2 elements in original, [3,4], becomes the second row in the constructed 2D array.

Time Complexity: O(n logn + n)
Space Complexity: O(n) 

Constraints:   
    1 <= original.length <= 5 * 104
    1 <= original[i] <= 105
    1 <= m, n <= 4 * 104

    
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
        int n;
        cin >> n;
        int arr[n];
        for ( int i=0; i<n; i++ ) {
            cin >> arr[i];
            if ( arr[i] > n ) return -1;
        }

        vector<int> copyarr(n);
        for ( int i=0; i<n; i++ ) {
            copyarr[i] = arr[i];

        }
        sort(copyarr.begin(), copyarr.end());
        int k = abs(arr[0]-copyarr[0]);
        for (int i=0; i<n; i++ ) {
            if ( abs(arr[i]-copyarr[i]) != 0)
            k = gcd(k, abs(arr[i]-copyarr[i]));
        }
        cout << k << endl;
    }
    return 0;
}