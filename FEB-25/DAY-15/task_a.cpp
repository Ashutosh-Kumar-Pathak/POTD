/*

Question 75.  Recursively find sum of digits
   Given two numbers A and B, the task is to find f(AB). f(n) which takes a positive integer n as input and does the following:
   f(n):

if n < 10

    return n

else return f( sum_of_digits(n) )

Link : 
      https://www.geeksforgeeks.org/problems/recursively-find-sum-of-digits3558/1

Example 1: 
     Input :
         A = 6, B = 6
     Output: 
        9
     Explanation: 
          f(6^6) = f(46656) = f(27) = f(9) = 9

Time Complexity: O(Log(B))
Space Complexity: O(1) 

Constraints:   
   1 <= A, B <= 10^9.

*/  


class Solution{
    
    int sumOfdigit ( int sum, int n) {
         if ( n == 0 ) return sum;
         return sumOfdigit (sum+n%10, n/10) ;
    }
    
    int power(int A, int B) {
         if ( B == 0 ) return 1 ;
         if ( A >= 10 ) A = sumOfdigit (0,A);
         long long sum = sumOfdigit(0,power(A,B/2)) ;
         if ( B % 2 == 0 ) return sumOfdigit(0,sum*sum);
         else return sumOfdigit(0,A*sumOfdigit(0,sum*sum));
    }
    
	public:
	int SumofDigits(int A, int B)
	{
	    // Code here
	    A = sumOfdigit (0,A);
	    long long ans = power(A,B);
	    while ( ans >= 10 ) {
	       ans = sumOfdigit(0,ans);
	    }
	    return ans;
	}
};