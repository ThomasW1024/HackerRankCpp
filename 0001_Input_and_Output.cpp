/*https://www.hackerrank.com/challenges/cpp-input-and-output/problem*/
#include <iostream>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, sum;
    while(std::cin >> i){
        sum += i;
    }
    std::cout <<sum << std::endl;
    return EXIT_SUCCESS;
}
