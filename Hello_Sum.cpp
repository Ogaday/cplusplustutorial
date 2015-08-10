// Hello_Sum.cpp
// compile with
//$ g++ Hello_Sum.cpp -o Hello_Sum
// run with
//$ Hello_Sum

#include <iostream>
int main(){
    int a, b, sum;
    
    std::cin >> a;
    std::cin >> b;

    sum = a + b;
    std::cout << sum << std::endl;
    return 0;
}