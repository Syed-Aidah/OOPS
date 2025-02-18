#include <iostream>
#include <cmath> 

class Circle {
private:
    double radius; 

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return M_PI * radius * radius; 
    }

    void displayArea() {
        std::cout << "Area of the circle with radius " << radius << " is: " 
                  << calculateArea() << std::endl;
    }
};

int main() {
    double r;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    Circle circle(r);

    circle.displayArea();

    return 0;
}
