/*https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem*/
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
    list.push_back("Greater than 9");
}

int main() {  
    int i;
    std::vector<std::string> list;
    buildList(list);
    while(std::cin >> i){
        if(i > list.size())
            i = 10;
        std::cout << list[--i] << "\n";
   }
   return EXIT_SUCCESS;
}



void printSwitch(int i){
        switch(i){
        case 1:
            std::cout << "one";
            break;
        case 2:
            std::cout << "two";
            break;
        case 3:
            std::cout << "three";
            break;
        case 4:
            std::cout << "four";
            break;
        case 5:
            std::cout << "five";
            break;
        case 6:
            std::cout << "six";
            break;
        case 7:
            std::cout << "seven";
            break;
        case 8:
            std::cout << "eight";
            break;
        case 9:
            std::cout << "nine";
            break;
        default:
            std::cout << "Greater than 9";
    }
}
