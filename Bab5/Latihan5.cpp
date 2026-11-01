
#include <iostream>
using namespace std;

int main() {
    char Kodestudio;
    int nomorhari, jumlahTiket;
    int dasar = 0, tambahan = 0;
    int tiket, jumtiket, totalbayar;

    cout << "Kode studio (r/d/v) : ";
    cin >> Kodestudio;

    // Menentukan harga dasar berdasarkan kode studio
    switch (Kodestudio) {
        case 'R':
        case 'r':
            dasar = 25000;
            break;

        case 'D':
        case 'd':
            dasar = 50000;
            break;

        case 'V':
        case 'v':
            dasar = 75000;
            break;

        default:
            cout << "Studio tidak tersedia" << endl;
            return 0;
    }

    cout << "Nomor hari (1-7) : ";
    cin >> nomorhari;

    // Menentukan biaya tambahan berdasarkan hari
    switch (nomorhari) {
        case 1:
        case 2:
        case 3:
        case 4:
            tambahan = 0;
            break;

        case 5:
            tambahan = 5000;
            break;

        case 6:
        case 7:
            tambahan = 10000;
            break;

        default:
            cout << "Nomor hari tidak valid" << endl;
            return 0;
    }

    cout << "Jumlah tiket : ";
    cin >> jumlahTiket;

    // Memeriksa jumlah tiket
    switch (jumlahTiket > 0) {
        case 1:
            tiket = dasar + tambahan;
            jumtiket = jumlahTiket;
            totalbayar = tiket * jumtiket;

            cout << "======TIKET======" << endl;
            cout << "Studio: " << Kodestudio << endl;
            cout << "Harga dasar:Rp " << dasar << endl;
            cout << "Biaya tambahan:Rp " << tambahan << endl;
            cout << "Harga per tiket :Rp" << tiket << endl;
            cout << "Jumlah tiket :" << jumtiket << endl;
            cout << "Total bayar :Rp" << totalbayar << endl;
            break;

        case 0:
            cout << "Jumlah tiket tidak valid" << endl;
            break;
    }

    return 0;
}

