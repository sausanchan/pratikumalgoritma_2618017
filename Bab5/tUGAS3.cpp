#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int nasgor = 15000, miegor = 12000;
    int bakso = 10000, esteh = 5000;
    int diskon, jumpesanan, pilmenu;
    int totpembayaran, totpesanan, hargasatuan;

    cout << "Masukan Nama Pemesan: ";
    getline(cin, nama);

    // Menu
    cout << "\n=== MENU KANTIN ===";
    cout << "\n1. Nasi Goreng   - Rp15000";
    cout << "\n2. Mie Goreng    - Rp12000";
    cout << "\n3. Bakso         - Rp10000";
    cout << "\n4. Es Teh        - Rp5000";

    cout << "\nPilih menu: ";
    cin >> pilmenu;

    switch (pilmenu) {
        case 1:
            hargasatuan = nasgor;
            break;

        case 2:
            hargasatuan = miegor;
            break;

        case 3:
            hargasatuan = bakso;
            break;

        case 4:
            hargasatuan = esteh;
            break;

        default:
            cout << "Pilihan menu tidak tersedia!";
            return 0;
    }

    cout << "Masukan jumlah pesanan: ";
    cin >> jumpesanan;

    if (jumpesanan <= 0) {
        cout << "Jumlah pesanan tidak valid!";
        return 0;
    }

    // Perhitungan
    totpesanan = hargasatuan * jumpesanan;
    diskon = totpesanan * 8 / 100;
    totpembayaran = totpesanan - diskon;

    // Struk pembayaran
    cout << "\n=== STRUK PEMBAYARAN ===";
    cout << "\nNama pemesan       : " << nama;
    cout << "\nHarga satuan       : Rp" << hargasatuan;
    cout << "\nJumlah pesanan     : " << jumpesanan;
    cout << "\nTotal pesanan      : Rp" << totpesanan;
    cout << "\nDiskon 8%          : Rp" << diskon;
    cout << "\nTotal pembayaran   : Rp" << totpembayaran;

    cout << "\nTerima kasih telah memesan!";

    return 0;
}

