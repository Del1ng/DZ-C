#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:

    Rectangle() : width(0), height(0) {}

    Rectangle(double w, double h) : width(w), height(h) {}

    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }

    double getArea() const { return width * height; }

    void display() const {
        cout << "Ширина: " << width << ", Высота: " << height
            << ", Площадь: " << getArea() << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Rectangle r1;                 
    Rectangle r2(5.5, 3.2);        

    r1.setWidth(4.0);
    r1.setHeight(2.5);

    cout << "Прямоугольник 1:\n";
    r1.display();

    cout << "\nПрямоугольник 2:\n";
    r2.display();

    return 0;
}