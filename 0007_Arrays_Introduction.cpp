/*https://www.hackerrank.com/challenges/arrays-introduction*/

#include <vector>
#include <iostream>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned size;
    std::cin >> size;
    std::vector<int> list;
    while(list.size() != size){
        int integer;
        std::cin >> integer;
        list.push_back(integer);
    }
    
    for(auto iter = list.crbegin(); iter != list.crend(); ++iter){
       std::cout << *iter << " ";
    }
    
    return EXIT_SUCCESS;
}
