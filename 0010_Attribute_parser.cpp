/*https://www.hackerrank.com/challenges/attribute-parser/problem*/
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
#include <sstream>
#include <map>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::vector<std::string> tags;
    std::map<std::string, std::string> map;
    std::string in_string;
    int size, request;
    std::cin >> size >> request;
    for(;size != 0 ; --size){
        std::string in_string;
        std::getline(std::cin, in_string);
        
        if (in_string.empty()){
            ++size;continue;
        }
        /*
          it should be shorten
        */
        for(auto c = 0 ; c <in_string.length(); c++){
            switch(in_string[c]){
                case ' ':
                case '"':
                case '=':
                case '<':
                case '>':
                case ',':
                    in_string[c] = ' ';
            }
        }
        std::istringstream split(in_string);
        std::vector<std::string> buffer;
        for (std::string each; std::getline(split, each, ' '); buffer.push_back(each));

        bool taged = false;
        std::string name = "";
        for (auto item : buffer){
            
            if (item.length() == 0){
                continue;   //enpty line
            }
           
            if (item.find("/") == 0){
                tags.pop_back();   //find end tag
                break;
            }
            
            if (!taged){
                //std::cout << "tag: " << item <<"\n";
                std::string tag = item;
                if (!tags.empty())
                    tag = tags.back() + "." + tag;
                //std::cout << tag <<"\n";
                tags.push_back(tag);
                taged = true;
            }else{
                if (name.empty()){
                    name = tags.back()+ "~" + item;
                    //std::cout << "name : " << name <<"\n";
                }else{
                    //std::cout << item <<"\n";
                    map.insert( std::make_pair(name, item) );
                    //clean up for the next attribute
                    bool taged = false;
                    name = "";
                }
            }

        }
    }
    
    for(;request != 0 ; --request){
        std::string s;
        std::cin >>s;
        s = map[s];
        if ( ! s.empty() )
            std::cout << s <<"\n";
        else
            std::cout << "Not Found!\n";
    }
    
    return 0;
}
