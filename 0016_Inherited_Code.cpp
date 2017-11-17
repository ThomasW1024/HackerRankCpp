/*https://www.hackerrank.com/challenges/inherited-code/problem*/
#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException : public exception{
    public :
        BadLengthException(int n) : length{std::to_string(n)}{}
    
        virtual const char* what() const throw(){
            return length.c_str();
        }
      private: 
            const std::string length;
};

bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		std::cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				std::cout << "Valid" << '\n';
			} else {
				std::cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			std::cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}
