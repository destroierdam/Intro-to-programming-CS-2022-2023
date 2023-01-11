/*
Напишете структура триъгълник в двумерна координатна система, описан с три точки. 
Напишете функции за намиране на разстояние между две точки, периметър и площ на триъгълник.
*/
#include <cmath>
#include <cassert>
#include <iostream>

struct Point {
    double x, y;
};

double calculateDistance(Point a, Point b) {
    return std::sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

void testCalculateDistance() {
    Point a, b;
    a.x = 4.0;
    a.y = 3.0;
    b.x = 92.6;
    b.y = 420.69;
    double distance = calculateDistance(a, b);
    assert(distance - 426.983 < 0.001);
    // std::cout << distance;
}

struct Triangle {
    Point a, b, c;
};

double calculatePerimiter(Triangle t) {
    return calculateDistance(t.a, t.b) + 
           calculateDistance(t.b, t.c) + 
           calculateDistance(t.a, t.c);
}

void testCalculatePerimiter() {
    Point first, second, third;
    first.x = 4.0;
    first.y = 3.0;
    second.x = 92.6;
    second.y = 420.69;
    third.x = 10;
    third.y = 20;

    Triangle t;
    t.a = first;
    t.b = second;
    t.c = third;
    double perimiter = calculatePerimiter(t);
    std::cout << perimiter;
}

double calculateArea(Triangle & t) {
    double halfPerimeter = calculatePerimiter(t) / 2;
    double sideA = calculateDistance(t.b, t.c);
    double sideB = calculateDistance(t.a, t.c);
    double sideC = calculateDistance(t.a, t.b);
    return std::sqrt(halfPerimeter * 
                     (halfPerimeter - sideA) * 
                     (halfPerimeter - sideB) * 
                     (halfPerimeter - sideC));
}

void testCalculateArea() {
    Point first, second, third;
    first.x = 4.0;
    first.y = 3.0;
    second.x = 92.6;
    second.y = 420.69;
    third.x = 10;
    third.y = 20;

    Triangle t, t2;
    Triangle & aRef = t;
    
    aRef = t2;
    
    t.a = first;
    t.b = second;
    t.c = third;
    double area = calculateArea(t);
    std::cout << area;
}

int main() {
    testCalculateArea();
}
