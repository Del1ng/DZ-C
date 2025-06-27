#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual void draw() const = 0;
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() const override {
        cout << "Фигура: Прямоугольник (ширина = " << width << ", высота = " << height << ")" << endl;
    }

    double area() const override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        cout << "Фигура: Круг (радиус = " << radius << ")" << endl;
    }

    double area() const override {
        return 3.14159265 * radius * radius;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void draw() const override {
        cout << "Фигура: Треугольник (основание = " << base << ", высота = " << height << ")" << endl;
    }

    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    vector<Shape*> shapes;

    shapes.push_back(new Rectangle(4.0, 5.0));
    shapes.push_back(new Circle(3.0));
    shapes.push_back(new Triangle(6.0, 2.5));

    for (Shape* shape : shapes) {
        shape->draw();
        cout << "Площадь: " << shape->area() << endl << endl;
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
