/*Given a number n, we need to print its table.*/

#include <iostream>

/*Iterative Approach
Time Complexity – O(1)
Space Complexity – O(1)
*/

// void printTable(int n){
//     for(int i=1; i<=10; ++i){
//         std::cout<<n*i<<std::endl;
//     }
//     std::cout<<std::endl;
// }

/*Recursive approach
Time Complexity – O(1)
Space Complexity – O(1)
*/

void printTable(int n, int i=1){
    if(i>10){
        return;
    }
    std::cout<< n << " * " << i << " = " << n*i <<std::endl;
    printTable(n, i+1);
}

int main(){
    std::cout << "Enter a number: ";
    int n;
    std::cin>>n;
    std::cout << std::endl;
    printTable(n);
    return 0;
}