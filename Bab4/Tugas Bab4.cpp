#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    int pendapatan = 0, pajak = 0;
    int tarif = 0;
    int tanggungan = 0;

    cout << "======== PROGRAM PAJAK PENDAPATAN =======" << endl;
    cout << "Nama Anda : ";
    getline(cin, nama);
    cout << "Nim Anda : ";
    getline(cin, nim);

    cout << "     DATA PENDAPATAN" << endl;
    cout << "Pendapatan bulanan : Rp";
    cin >> pendapatan;

    // Validasi input
    if (pendapatan < 0) {
        cout << "Input tidak valid!" << endl;
        return 1;
    }

    cout << "Memiliki Tanggungan ? (1=Ya, 0=Tidak) ";
    cin >> tanggungan;

    // Penentuan tarif (4 if-else terpisah)
    if (pendapatan < 5000000) {
        tarif = 0;
    } else {
        tarif = tarif;
    }

    if (pendapatan >= 5000000 && pendapatan < 10000000) {
        tarif = 5;
    } else {
        tarif = tarif;
    }

    if (pendapatan >= 10000000 && pendapatan < 20000000) {
        tarif = 10;
    } else {
        tarif = tarif;
    }

    if (pendapatan >= 20000000) {
        tarif = 15;
    } else {
        tarif = tarif;
    }

    pajak = pendapatan / 100 * tarif;

    // Pengurangan tanggungan
    if (tanggungan == 1) {
        pajak = pajak - 100000;
    } else {
        pajak = pajak;
    }

    // Pajak tidak boleh negatif
    if (pajak < 0) {
        pajak = 0;
    } else {
        pajak = pajak;
    }

    cout << "Tarif      : " << tarif << "%" << endl;
    cout << "Pajak akhir: Rp" << pajak << endl;

    return 0;
}
