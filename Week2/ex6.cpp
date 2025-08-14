#include<iostream>
using namespace std;
class box {
    public:
        double length , width , height ;

        box() {
            length = 1;
            width = 1;
            height = 1;
        }

        box(int l , int w , int h) {
            length = l;
            width = w;
            height = h;

        }

        box(double l, double w , double h) {
            length = l;
            width = w;
            height = h;


        }

        int volume(int l , int w , int h) {
            length = l;
            width = w;
            height = h;
           return length * width * height;
        }

        double volume() {
            return length * width * height;
        }
        
        int volume(int a) {
            length = width = height = a;
            return length * width * height;
        }
    
};
int main() {
    box b1;
    cout << b1.length << ", " << b1.width << ", " << b1.height << endl; 
    cout << b1.volume() << endl;
    box b2(2.0, 3.5, 4.8);
    cout << b2.length << ", " << b2.width << ", " << b2.height << endl; 
    cout << b2.volume(3) << endl;;
    box b3(2, 4, 6);
    cout << b3.length << ", " << b3.width << ", " << b3.height << endl; 
    cout << b3.volume(3, 1, 1) << endl;

    return 0;
}