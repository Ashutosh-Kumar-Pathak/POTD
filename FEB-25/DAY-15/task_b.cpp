
/*

Question 75.  Min and Max in Array
   Given an array arr. Your task is to find the minimum and maximum elements in the array.

Note: Return a Pair that contains two elements the first one will be a minimum element and the second will be a maximum.

if n < 10

    return n

else return f( sum_of_digits(n) )

Link : 
      https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

Example 1: 
     Input :
         arr[] = [3, 2, 1, 56, 10000, 167]
     Output: 
        1 10000
     Explanation: 
          minimum and maximum elements of array are 1 and 10000.

Time Complexity: O(Log(B))
Space Complexity: O(1) 

Constraints:   
   1 <= A, B <= 10^9.

*/  


class Solution {
    public:
   
     pair <int,int> maxmin (const vector<int> arr, int index, int mini, int maxi ) {
         if ( index == arr.size() ) return {mini,maxi};
       return maxmin(arr, index+1, min(mini,arr[index]), max(maxi,arr[index]));
     } 
  
     pair<int, int> getMinMax(vector<int> arr) {
         // code here
         int mini = INT_MAX;
         int maxi = INT_MIN;
         if ( arr.size() == 1 ) return {arr[0],arr[0]};
         return maxmin(arr,0,mini,maxi);
         
     }
 };