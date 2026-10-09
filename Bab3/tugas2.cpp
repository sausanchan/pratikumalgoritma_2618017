
#include <iostream>
using namespace std;

int main()
{
    float celsius;

    cout << "\t\tPROGRAM KONVERSI SUHU" << endl;

    cout << "\nMasukkan suhu dalam Celsius : ";
    cin >> celsius;

    float fahrenheit = (celsius * 9.0 / 5.0) + 32;
    float reamur = celsius * 4.0 / 5.0;
    float kelvin = celsius + 273.15;

    cout << "Hasil konversi suhu:" << endl;
    cout << "\t\t\t" << celsius << " derajat Celsius = "
         << fahrenheit << " derajat Fahrenheit" << endl;
    cout << "\t\t\t" << celsius << " derajat Celsius = "
         << reamur << " derajat Reamur" << endl;
    cout << "\t\t\t" << celsius << " derajat Celsius = "
         << kelvin << " Kelvin" << endl;

    return 0;
}

