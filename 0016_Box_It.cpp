/*https://www.hackerrank.com/challenges/box-it/problem*/
#include <iostream>
using namespace std;


//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 
class Box{
    public:
// Constructors: 
        Box(): length{0},breadth{0}, height{0} {}
        Box(int l,int b,int h):length{l},breadth{b}, height{h} {}
        Box(const Box& orig) :length{orig.length},breadth{orig.breadth}, height{orig.height} {}
        
        int getLength() const{return length;}
        int getBreadth() const {return breadth;} 
        int getHeight() const{return height;}
        long long CalculateVolume(){return 1LL * height * length * breadth;}

//Overload operator < as specified
        bool operator<(Box& b){
            if (length == b.length){
                if (breadth == b.breadth){
                    return height < b.height;
                }
                return breadth < b.breadth;
            }
            return length < b.length;
        }

//Overload operator << as specified
        friend ostream& operator<<(ostream& out, Box& B){
            out << std::to_string(B.length) << " " << std::to_string(B.breadth) << " " << std::to_string(B.height);
            return out;
        }

    private:
        int length;
        int breadth;
        int height;
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
