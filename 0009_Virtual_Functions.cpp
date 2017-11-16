#include <vector>
#include <iostream>
#include <string>
#include <numeric>

class Person{
    public:
        virtual void getdata(){
            int i;
            std::cin >> name >> i;
            age = static_cast<unsigned char> (i);
        }
        virtual void putdata(){
            std::cout << name << " " << static_cast<int>(age);
        }
        
    protected:
        std::string name;
        unsigned char age;
};

class Student : public Person{
    public:
        static unsigned next_id;
    
        Student() : cur_id{++next_id}
        { }
    
        virtual void getdata(){
            Person::getdata();
            for (unsigned i = 0;i < 6 ; ++i){
                short m;
                std::cin >> m;
                marks.push_back(m);
            }
        }
        
        virtual void putdata(){
            Person::putdata();
            std::cout << " " << std::accumulate(marks.cbegin(), marks.cend(), 0) << " "  << cur_id << "\n";
        }
        
    private:
        const unsigned cur_id;
        std::vector<unsigned short> marks;
};

class Professor : public Person{
    public:
        static unsigned next_id;
        
        Professor() : cur_id{++next_id}
        { }
    
        virtual void getdata(){
            Person::getdata();
            std::cin >> publications;
        }
        virtual void putdata(){
            Person::putdata();
            std::cout << " " << publications << " "<< cur_id << "\n";
        }
        
    private:
        const unsigned cur_id;
        unsigned short publications ;
};

unsigned Professor::next_id = 0;
unsigned Student::next_id = 0;
int main(){
    int n, val;
    std::cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){
        std::cin>>val;
        
        if(val == 1)    // If val is 1 current object is of type Professor
            per[i] = new Professor;
        else            // Else the current object is of type Student
          per[i] = new Student;
        
        per[i]->getdata(); // Get the data from the user.
    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return EXIT_SUCCESS;
}
