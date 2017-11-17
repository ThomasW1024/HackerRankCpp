/*https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem*/
#include <sstream>
#include <vector>
#include <iostream>
#include <string>
/*
void convertToInt(std::vector<int> &list, std::deque<char>& temp){
    int sum = 0;
    for (auto i=0; i < temp.size(); i++ )
        sum += static_cast<int>(static_cast<int>(temp[i]-'0') * std::pow(10, i));
    list.push_back(sum);
    temp.clear();
}

std::vector<int> parseInts(std::string str) {
   // Complete this function
    std::basic_istringstream<char> in_stream(str);
    std::vector<int> list;
    std::deque<char> temp;
    char c;
    while(in_stream >> c){
        if (c == ' ') {
            continue;
        }else if(c == ','){
            convertToInt(list, temp);
        }else{
            temp.push_front(c);
        }
    }
    convertToInt(list, temp);
    return list;
}*/
/*
std::vector<int> parseInts(std::string str) {
   // Complete this function
    for(auto iter = std::begin(str) ; iter != std::end(str); ++iter){
        if(*iter == ','){
            *iter = ' ';
        }
    }
    std::stringstream in_stream(str);
    int i;
    std::vector<int> list;
    while(in_stream >> i){
        list.push_back(i);
    }
    return list;
}*/
std::vector<int> parseInts(std::string str) {
   // Complete this function
    std::vector<int> list;
    std::istringstream in_stream(str);
    for (std::string i; std::getline(in_stream, i, ','); list.push_back(std::stoi(i)));
    return list;
}



int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return EXIT_SUCCESS;
}
