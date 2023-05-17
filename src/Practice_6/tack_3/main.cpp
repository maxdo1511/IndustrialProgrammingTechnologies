#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"

void pause()
{
    system("pause");
    system("cls");
}

int main()
{
    using namespace std;
    Ocean ocean1 = Ocean("Pacific", "Earth", 4280, 165250000);
    cout << ocean1;
    Ocean ocean2 = Ocean();
    cout << "(NAME, LOCATION, DEPTH, AREA): ";
    cin >> ocean2;
    cout << ocean2;
    pause();
    Sea sea1 = Sea(ocean2, "Laptev", 578, 700000);
    cout << sea1;
    pause();
    cout << endl;
    Bay bay1 = Bay(ocean1, "Kamchatka", 2000, rand());
    cout << bay1;
    pause();
    Sea sea2 = Sea("Caspian", "Eastern Europe", 211, 371000);
    cout << sea2;
}