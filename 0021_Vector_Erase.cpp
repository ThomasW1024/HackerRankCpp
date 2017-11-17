/*https://www.hackerrank.com/challenges/vector-erase/problem*/
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::vector<int> list;
    int i,j, k;
    std::cin >> j;
    while(j-- > 0){
        std::cin >>i;
        list.push_back(i);
    }
    std::cin >> k;
    list.erase( list.begin() +k-1 );
    
    std::cin >> i >> j;
    list.erase( list.begin() +i-1, list.begin()+j-1 );
    
    std::cout << list.size() << "\n";
    for(const auto& number : list)
        std::cout << number <<" ";
    return 0;
}
