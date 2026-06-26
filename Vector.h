#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>



class Vector
{
    private:
        double x;
        double y;
        double z;
        friend std::ostream& operator<<(std::ostream& os, const Vector& v);

    public:
        // Constructor
        Vector();
        Vector(double x, double y, double z);

        double magnitude() const;
        Vector normalize() const;
        double dot(const Vector& other) const;
        Vector cross(const Vector& other) const;

        // Getters
        double getX() const;
        double getY() const ;
        double getZ() const;

        // Setters
        void setX(double x);
        void setY(double y);
        void setZ(double z);

        //Operator overloads
        Vector operator+(const Vector& other) const;
        Vector operator-(const Vector& other) const;
        Vector operator*(double scalar) const;
};
#endif // VECTOR_H