#include "Conus.h"
class UsechenniyConus : virtual Conus{

    private:
        double radius2;
    public:
        UsechenniyConus();
        UsechenniyConus(double R1,double R2, double H);
        UsechenniyConus(double X,double Y,double Z,double R1,double R2, double H);
        UsechenniyConus(Conus& conus, double R2);

        void setRadius2(double Radius2);
        double Radius2();
        double Area();
        double Volume();

        bool operator >(UsechenniyConus& C2);
        bool operator <(UsechenniyConus& C2);
        bool operator >=(UsechenniyConus& C2);
        bool operator <=(UsechenniyConus& C2);
        bool operator ==(UsechenniyConus& C2);

        friend std::ostream& operator<<(std::ostream& stream, UsechenniyConus& obj);
        friend std::istream& operator>>(std::istream& stream, UsechenniyConus& obj);
};

