#include "Vector.h"
#include "Point.h"

#include <iostream>
using namespace std;

int main() {
    // Create two points
    Point p1(1.0, 2.0, 3.0);
    Point p2(4.0, 5.0, 6.0);

    // Calculate distance between points
    double distance = p1.distanceTo(p2);
    cout << "Distance between points: " << distance << endl;

    // Create two vectors
    Vector v1;
    v1.setX(1.0);
    v1.setY(2.0);
    v1.setZ(3.0);
    Vector v2;
    v2.setX(4.0);
    v2.setY(5.0);
    v2.setZ(6.0);

    // Calculate magnitude of vectors
    cout << "Magnitude of v1: " << v1.magnitude() << endl;
    cout << "Magnitude of v2: " << v2.magnitude() << endl;

    // Normalize vectors
    Vector v1_normalized = v1.normalize();
    Vector v2_normalized = v2.normalize();
    cout << "Normalized v1: " << v1_normalized << endl;
    cout << "Normalized v2: " << v2_normalized << endl;

    // Calculate dot product
    double dot_product = v1.dot(v2);
    cout << "Dot product of v1 and v2: " << dot_product << endl;

    // Calculate cross product
    Vector cross_product = v1.cross(v2);
    cout << "Cross product of v1 and v2: " << cross_product << endl;

    // Vector addition and subtraction
    Vector v_add = v1 + v2;
    Vector v_sub = v1 - v2;
    cout << "v1 + v2: " << v_add << endl;
    cout << "v1 - v2: " << v_sub << endl;

    // Scalar multiplication
    double scalar = 2.0;
    Vector v_scalar_mult = v1 * scalar;
    cout << "v1 * " << scalar << ": " << v_scalar_mult << endl;

    return 0;
}