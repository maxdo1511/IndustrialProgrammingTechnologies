
#include <iosfwd>

class Conus {
protected:
    double x,y,z;
    double radius;
    double height;
public:
    Conus();
    Conus(double Radius, double Height);
    Conus(double X,double  Y, double Z, double Radius, double Height);
    void setCoordinates(double X, double Y, double Z);
    void setRadius(double Radius);
    void setHeight(double Height);
    double Radius();
    double Height();
    double Area();
    double Volume();

    friend std::ostream& operator<<(std::ostream& stream, Conus obj);
};
