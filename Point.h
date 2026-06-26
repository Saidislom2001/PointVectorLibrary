#ifndef POINT_H
#define POINT_H

class Point
{
    private:
        double x;
        double y;
        double z;

    public:
        // Constructor
        Point();
        Point(double x, double y, double z);

        double getX() const;
        double getY() const;
        double getZ() const;

        double distanceTo(const Point& other) const;
        
};

#endif // POINT_H