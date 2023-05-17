#include <cmath>
#include "Conus.h"
#include "iostream"
const double pi = 3.14159265;
Conus::Conus(double X, double Y, double Z, double Radius, double  Height) {
    radius=Radius;
    height=Height;
    x=X;
    y=Y;
    z=Z;
}
Conus::Conus(double Radius, double Height){
    radius=Radius;
    height=Height;
}
Conus::Conus() {
    x=y=z=radius=height=0;
}
void Conus::setRadius(double Radius) {
    radius=Radius;
}
void Conus::setCoordinates(double X, double Y, double Z) {
    x=X;
    y=Y;
    z=X;
}
void Conus::setHeight(double Height) {
    height=Height;
}
double Conus::Radius()
{
    return radius;
}

double Conus::Height()
{
    return height;
}

double Conus::Area()
{
    return pi * radius * sqrt(radius * radius + height * height) + pi * radius * radius;
}

double Conus::Volume()
{
    return pi * radius * radius * height / 3;
}

std::ostream& operator<<(std::ostream& stream, Conus obj)
{
    stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") ";
    stream << "r=" << obj.radius << "; h=" << obj.height << "; area=" << obj.Area() << "; vol=" << obj.Volume();
    return stream;
}