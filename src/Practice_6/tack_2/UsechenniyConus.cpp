#include "UsechenniyConus.h"
#include <cmath>
#include "iostream"
const double pi = 3.14159265;

UsechenniyConus::UsechenniyConus(double A, double B, double C, double R1, double R2, double H)
{
    x = A; y = B; z = C;
    radius = R1; radius2 = R2; height = H;
}
UsechenniyConus::UsechenniyConus( double R1, double R2, double H)
{
    radius = R1; radius2 = R2; height = H;
}
UsechenniyConus::UsechenniyConus() {
    UsechenniyConus* conus = new UsechenniyConus(0, 0, 0, 0, 0, 0);
    *this = *conus;
}
UsechenniyConus::UsechenniyConus(Conus& cone, double R2):Conus(cone)
{
    radius2 = R2;
}
double UsechenniyConus::Radius2()
{
    return radius2;
}
double UsechenniyConus::Area()
{
    double M = sqrt(pow(radius - radius2, 2) + height * height);
    return pi * (radius * radius + (radius + radius2) * M + radius2 * radius);
}
double UsechenniyConus::Volume()
{
    double M = sqrt(pow(radius2 - radius, 2) + height * height);
    return pi * height * (radius * radius + radius * radius2 + radius2 * radius2)/3;
}
bool UsechenniyConus::operator >(UsechenniyConus& C2) { return Volume() > C2.Volume(); }
bool UsechenniyConus::operator <(UsechenniyConus& C2) { return Volume() < C2.Volume(); }
bool UsechenniyConus::operator >=(UsechenniyConus& C2) { return Volume() >= C2.Volume(); }
bool UsechenniyConus::operator <=(UsechenniyConus& C2) { return Volume() <= C2.Volume(); }
bool UsechenniyConus::operator ==(UsechenniyConus& C2) { return Volume() == C2.Volume(); }

std::ostream& operator<<(std::ostream& stream, UsechenniyConus& obj)
{
    stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") ";
    stream << "r1=" << obj.radius << "; r2=" << obj.radius2 << "; h=" << obj.height << "; ";
    stream << "area=" << obj.Area() << "; vol=" << obj.Volume();
    return stream;
}

std::istream& operator>>(std::istream& in, UsechenniyConus& obj)
{
    in >> obj.radius >> obj.radius2 >> obj.height;
    return in;
}