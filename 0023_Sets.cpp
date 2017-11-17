/*https://www.hackerrank.com/challenges/cpp-sets/problem*/
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int type, size;
    long data;
    std::set<long> set;
    std::cin >> size;
    while(--size >= 0){
        std::cin >> type >> data;
        if (type ==1){
            set.insert(data);
        }else if (type == 2){
            set.erase(data);
        }else{
            if (set.find(data) == set.end())
                std::cout << "No\n";
            else
                std::cout << "Yes\n";
        }
    }
    return 0;
}
