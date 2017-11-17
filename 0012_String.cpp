/*https://www.hackerrank.com/challenges/c-tutorial-strings/problem*/
#include <iostream>
#include <string>

int main() {
   // Complete the program
    std::string a, b, a2, b2;
    std::cin >> a >> b;
    a2 = a; a2[0] = b[0];
    b2 = b; b2[0] = a[0];
    std::cout << a.length() << " " << b.length() << "\n";
    std::cout << a+b <<"\n";
    std::cout << a2 << " " << b2;
    return 0;
}
