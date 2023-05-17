#include <iostream>
#include <windows.h>
#include "Conus.h"
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    int R, H, X, Y, Z;
    Conus* cone_dyn; std::cin >> R >> H >> X >> Y >> Z;
    cone_dyn = new Conus(X, Y, Z, R, H);
    std::cout << *cone_dyn << std::endl;
    cone_dyn = NULL; delete cone_dyn;

    std::cout << std::endl;

    //3.
    Conus* arr = new Conus[3]();
    int i, r, h;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> r >> h;
        arr[i] = Conus(r, h);
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}
