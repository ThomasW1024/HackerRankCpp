/*https://www.hackerrank.com/challenges/classes-objects/problem*/
#include <vector>
#include <iostream>
#include <cassert>

// Write your Student class here
class Student{
    public:
        Student(){
            std::vector<unsigned> scores;
        }
        int calculateTotalScore() const{
            int sum =0;
            for (const auto &i : scores){
                sum += static_cast<int>(i);
            }
            return sum;
        }
        void input(){
            unsigned i;
            for(unsigned counter = 0; counter < 5; counter++){
                std::cin >> i;
                scores.push_back(i);
            }
        }
    private:
        std::vector<unsigned> scores;
};
int main() {
    int n; // number of students
    std::cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    std::cout << count;
    
    return 0;
}
