
#include <iostream>
using namespace std;

int main() {
    int masukanhargaproduk1;
    int masukanhargaproduk2;
    int totalHarga;
    int diskon10;
    int totalBayar;

    cout << "==================== PROGRAM HITUNG DISKON ====================" << endl;

    cout << "Masukan harga produk 1 : Rp";
    cin >> masukanhargaproduk1;

    cout << "Masukan harga produk 2 : Rp";
    cin >> masukanhargaproduk2;

    // Menghitung total harga
    totalHarga = masukanhargaproduk1 + masukanhargaproduk2;

    // Menghitung diskon 10%
    diskon10 = totalHarga * 10 / 100;

    // Menghitung total yang harus dibayar
    totalBayar = totalHarga - diskon10;

    cout << "========================= HASIL PERHITUNGAN =========================" << endl;

    
    cout << "Total harga    : Rp" << totalHarga << endl;
    cout << "Diskon 10%     : Rp" << diskon10 << endl;
    cout << "Total bayar    : Rp" << totalBayar << endl;

    cout << "==========================================================" << endl;

    return 0;
}

