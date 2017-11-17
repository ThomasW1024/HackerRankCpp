/*https://www.hackerrank.com/challenges/cpp-lower-bound/problem*/
#include <vector>
#include <iostream>
#include <algorithm>

auto search( int &i, int &counter, auto& iter){

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::vector<int> list;
    int i, size;
    std::cin >> size;
    while(size-- > 0){
        std::cin >>i;
        list.push_back(i);
    }    
    std::cin >> size;
    while(size-- > 0){
        std::cin >>i;
        auto iter = std::lower_bound(list.begin(), list.end(), i);
        if (*iter == i)
            std::cout << "Yes " << iter - list.begin()+1 <<"\n";
        else
            std::cout <<"No " << iter - list.begin()+1 <<"\n";
        /*
        std::cin >>i;
        int counter = 0;
        bool if_success = false;
        for(auto &iter : list){
            ++counter;
            if(i == iter){
                if_success = true;
                break;
            }else if (i< iter){
                if_success = false;
                break;
            }
        }
        if (if_success)
            std::cout << "Yes " << counter <<"\n";
        else
            std::cout <<"No " << counter <<"\n";
        */
    }
    return 0;
}
