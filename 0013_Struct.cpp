/*https://www.hackerrank.com/challenges/c-tutorial-struct/problem*/
#include <vector>
#include <iostream>

struct Student{
    unsigned age;
    std::string first_name;
    std::string last_name;
    unsigned standard;
};

int main() {
    Student st;
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    return EXIT_SUCCESS;
}
