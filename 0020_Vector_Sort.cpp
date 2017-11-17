/*https://www.hackerrank.com/challenges/vector-sort/problem*/
#include <vector>
#include <iostream>
#include <algorithm>
int main() {
    std::vector<int> list;
    int i, size;
    std::cin >> size;
    while(size-- > 0){
        std::cin >>i;
        list.push_back(i);
    }
    std::sort(list.begin(), list.end());
    for(const auto& number : list)
        std::cout << number <<" ";
    return 0;
}
