#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length, breadth;
    public:
        Rectangle(float l, float b) {
            length = l;
            breadth = b;
        }
        void draw() {
            for(int i=0; i<length; i++) {
                for(int j=0; j<breadth; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
        }
};

int main() {
    float l, b;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the breadth of the rectangle: ";
    cin >> b;
    Rectangle rect(l, b);
    rect.draw();
    return 0;
}