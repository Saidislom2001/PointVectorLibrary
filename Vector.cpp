#include "Vector.h"
#include <cmath>

std::ostream& operator<<(std::ostream& os, const Vector& v)
{
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}

Vector::Vector() : x(0), y(0), z(0) {}
Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {}

double Vector::getX() const
{
    return x;
}

double Vector::getY() const
{
    return y;
}

double Vector::getZ() const
{
    return z;
}

void Vector::setX(double x)
{
    this->x = x;
}

void Vector::setY(double y)
{
    this->y = y;
}

void Vector::setZ(double z)
{
    this->z = z;
}



double Vector::magnitude() const
{
    return std::sqrt(x * x + y * y + z * z);
}

Vector Vector::normalize() const
{

    double mag = magnitude();
    const double EPSILON = 1e-9;

    if (mag < EPSILON)
        return Vector();
        return Vector(x / mag, y / mag, z / mag);
}

double Vector::dot(const Vector& other) const
{
    return x * other.x + y * other.y + z * other.z;
}

Vector Vector::cross(const Vector& other) const
{
    return Vector(
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x
    );
}

Vector Vector::operator+(const Vector& other) const
{
    return Vector(x + other.x, y + other.y, z + other.z);
}
Vector Vector::operator-(const Vector& other) const
{
    return Vector(x - other.x, y - other.y, z - other.z);
}
Vector Vector::operator*(double scalar) const
{
    return Vector(x * scalar, y * scalar, z * scalar);
}



