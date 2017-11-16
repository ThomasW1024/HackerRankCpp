#include <iomanip>
#include <iostream>
#include <string>

template <class T>
void inAndOut(T input){
    std::cout << input << "\n";
}
void inAndOut(float input){
    std::cout << std::setprecision(3) << input << "\n";
}
void inAndOut(double input){
    std::cout << std::setprecision(9) << input << "\n";
}

bool findDecimal(std::string s){
    return s.find(".") != std::string::npos;
}
int main() {
    // Complete the code.
    std::cout << std::fixed ;
    std::string s;
    while(std::cin >> s){
        if (findDecimal(s)){
            if (s.length() > 9){
                inAndOut(std::stod(s));
            }else{
                inAndOut(static_cast<float>(std::stof(s)));
            }
        }else{
            inAndOut(s);
        }
    }
    return 0;
}
