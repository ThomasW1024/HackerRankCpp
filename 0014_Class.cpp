/*https://www.hackerrank.com/challenges/c-tutorial-class/problem*/
#include <iostream>

class Student{
    public:
        const unsigned &get_age() const{
            return age;
        }
        const unsigned &get_standard() const{
            return standard;
        }
        const std::string &get_first_name() const{
            return first_name;
        }
        const std::string &get_last_name() const{
            return last_name;
        }
        void set_age(unsigned a){
            age = a;
        }
        void set_standard(unsigned s){
            standard = s;
        }
        void set_first_name(std::string s){
            first_name = s;
        }
        void set_last_name(std::string s){
            last_name = s;
        }
        std::string to_string(){
            std::string s;
            s = std::to_string(age) + "," + first_name +","+ last_name +","+ std::to_string(standard);
            return s;
        }
        friend std::ostream& operator<<(std::ostream &os,const Student &s);
        /*{
            os << s.age << "," <<  s.first_name << "," << s.last_name << "," << s.standard;
            return os;
        }*/
    private:
        unsigned age;
        unsigned standard;
        std::string first_name;
        std::string last_name;
};

std::ostream& operator<<(std::ostream &os,const Student &s){
    os << s.age << "," <<  s.first_name << "," << s.last_name << "," << s.standard;
    return os;
}

int main() {
    unsigned age, standard;
    std::string first_name, last_name;
    
    std::cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st;
    //std::cout << st.to_strin();
    return 0;
}
