/*https://www.hackerrank.com/challenges/c-tutorial-pointer*/

#include <iostream>
#include <cmath>

void update(int *a,int *b) {
    // Complete this function
    auto sum = ( *a + *b );
    *b = abs(*a - *b);
    *a = sum;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    std::cin >> a >> b;
    update(pa, pb);
    std::cout << a << "\n" << b <<std::endl; 

    return EXIT_SUCCESS;
}
