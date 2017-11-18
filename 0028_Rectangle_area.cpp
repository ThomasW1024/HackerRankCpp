/*https://www.hackerrank.com/challenges/rectangle-area/problem*/
#include <iostream>

/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    public :
        virtual void display(){
            std::cout << width << " " << height  << "\n";
        }
    protected:
        int width;
        int height;
};
class RectangleArea : public Rectangle{
    public :
        void read_input(){
            int i, j;
            std::cin >> i >> j;
            width = i;
            height = j;
        }
        virtual void display(){
             std::cout << width * height  << "\n";
        }  
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
