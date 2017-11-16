/*https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem*/
#include <iostream>
#include <vector>
#include <string>

void buildList(std::vector<std::string> &list){
    list.push_back("one");
    list.push_back("two");
    list.push_back("three");
    list.push_back("four");
    list.push_back("five");
    list.push_back("six");
    list.push_back("seven");
    list.push_back("eight");
    list.push_back("nine");
}
void print(std::vector<std::string> &list, unsigned i){
    if (i <10U)
        std::cout << list[--i] << "\n";
    else{
        if (i %2 == 0)
            std::cout << "even" << "\n";
        else
            std::cout << "odd" << "\n";
    }
}
int main() {
    // Complete the code.
    std::vector<std::string> list; 
    buildList(list);
    unsigned first, last;
    std::cin >> first >> last;
    for(;first <= last; ++first){
        print(list, first);
    }
    return EXIT_SUCCESS;
}
