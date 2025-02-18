#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;  
    double width;   

public:
    void setLength(double l) {
        length = l;
    }
    
    double getLength() {
        return length;
    }

    void setWidth(double w) {
        width = w;
    }

    double getWidth() {
        return width;
    }

    double calculateArea() {
        return length * width;  
    }

    void displayArea() {
        cout << "Area of the rectangle with length " << length << " and width " << width
             << " is: " << calculateArea() << endl;
    }
};

int main() {
    double l, w;

    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;

    Rectangle rect;
    rect.setLength(l);
    rect.setWidth(w);
    rect.displayArea();

    return 0;
}
