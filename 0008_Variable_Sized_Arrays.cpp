/*https://www.hackerrank.com/challenges/variable-sized-arrays/problem*/

#include <cmath>
#include <vector>
#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <utility>

void fillMap(std::vector<std::vector<unsigned>> &linked_list, const unsigned &size){
    for (unsigned curr = 0 ; curr < size; ++curr){
        std::string in;
        getline(std::cin, in);
        if (in.empty()){
            --curr;
            continue;
        }
        std::istringstream line(in);
        std::istream_iterator<unsigned> begin(line), end;
        std::vector<unsigned> values(++begin, end);
        linked_list.push_back(values);
    }
}
void printRequest(std::vector<std::vector<unsigned>> &linked_list, const unsigned &size){
    for (unsigned curr = 0 ; curr < size; ++curr){
        unsigned x, y;
        std::cin >> x >> y;
        std::cout << linked_list.at(x).at(y) <<"\n";
    }
}


int main() {
    std::vector<std::vector<unsigned>> linked_list;
    unsigned size, request;
    std::cin >> size >> request;
    
    fillMap(linked_list, size);
    printRequest(linked_list, request);

    return EXIT_SUCCESS;
}

