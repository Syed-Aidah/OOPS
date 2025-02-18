#include <iostream>
using namespace std;

class Triangle {
private:
    double base;    
    double height; 

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
        cout << "Triangle object created with base: " << base << " and height: " << height << endl;
    }

    
    ~Triangle() {
        cout << "Triangle object with base " << base << " and height " << height << " is destroyed." << endl;
    }

    
    double calculateArea() {
        return 0.5 * base * height; 
    }

    
    void displayArea() {
        cout << "Area of the triangle with base " << base << " and height " << height
             << " is: " << calculateArea() << endl;
    }
};

int main() {
    double b, h;

    cout << "Enter the base of the triangle: ";
    cin >> b;
    cout << "Enter the height of the triangle: ";
    cin >> h;

    Triangle tri(b, h);

    tri.displayArea();

    return 0;
}
