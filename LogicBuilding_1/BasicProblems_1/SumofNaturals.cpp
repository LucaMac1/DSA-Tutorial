/*Given a number n, find the sum of the first n natural numbers.*/
#include <iostream>

/*
[Naive Approach] Loop Based Summation
Time Complexity – O(n)
Space Complexity – O(1)
*/ 
// int findSum(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }
//     return sum;
// }

/*
[Expected Approach] Formula Based Method
um of first n natural numbers = (n * (n+1)) / 2

Time Complexity – O(1)
Space Complexity – O(1)
*/

// int findSum(int n) {
//     return (n * (n + 1)) / 2;
// }

/*Note: The above program causes overflow, 
even if the result is not beyond the integer limit. 
We can avoid overflow up to some extent by dividing first.
*/

int findSum(int n) {
    if (n % 2 == 0)
      
      // Here multiplying by 1LL help to 
      // perform calculations in long long, 
      // so that answer should not be overflowed
      return (n / 2) * 1LL * (n + 1); 
 
   // If n is odd, (n+1) must be even
   else
     
      // Here multiplying by 1LL help to 
      // perform calculations in long long, 
      // so that answer should not be overflowed
      return  ((n + 1) / 2) * 1LL * n; 
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << findSum(n);
    return 0;
}