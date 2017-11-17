/*https://www.hackerrank.com/challenges/cpp-maps/problem*/
#include <map>
#include <string>
#include <iostream>
#include <algorithm>

int main() {
    int type, size, mark;
    std::string name;
    std::map<std::string, int> map;
    
    std::cin >> size;
    while(--size >= 0){
        std::cin >>type >> name;
        
        if (type == 1){
            std::cin >> mark;
            map[name] += mark;
        }else if (type == 2){
            map[name] = 0;
        }else{
            std::cout << map[name] <<"\n";
        }
    }
    return 0;
}
