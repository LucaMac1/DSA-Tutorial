/*Given a number n, check whether it is even or odd. Return true for even and false for odd.
 */

#include <iostream>
using namespace std;

/* Approach: By Finding the Remainder*/

// bool isEven(int n)
// {
//     if (n % 2 == 0)
//         return true;
//     return false;
// }

// Time Complexity: O(1)
// Space Complexity: O(1)

/* Approach using bitwise AND operator
The last bit of all odd numbers is always 1, while for even numbers it’s 0. 
So, when performing bitwise AND operation with 1, odd numbers give 1, and even numbers give 0.
*/
// If the last bit of the number is 1, then the number is odd, otherwise it is even.
bool isEven(int n)
{
    if (n & 1)
        return false;
    return true;
}
// Time Complexity: O(1)
// Space Complexity: O(1)

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    auto result = isEven(n) ? "True" : "False";
    cout << result << endl;
    return 0;
}
