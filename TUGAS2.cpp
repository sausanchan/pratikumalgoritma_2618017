#include <iostream>
#include <string>
using namespace std;

int main() {
    string masukanname;
    string masukannim;
    string masukankelas;
    string semester;
    string masukanipk;
  
    cout << "             PRATIKUM ALGORITMA 2026" << endl;


  cout << "Masukan Nama      : ";
getline(cin, masukanname);

    cout << "Masukan Nim       : ";
   cin >> masukannim;

    cout << "Masukan Kelas     : ";
    cin >> masukankelas;
    
    cout << "Semester   	  : ";
    cin >> semester;

    cout << "Masukan IPK       : ";
    cin >> masukanipk;
       // buang Enter yang tersisa sebelum getline

//    cout << "\nNama Minuman       : ";
//    cin >> minuman;

  

//    totalMakanan = hargaMakanan * jumlahMakanan;
//    totalMinuman = hargaMinuman * jumlahMinuman;
//    totalBayar = totalMakanan + totalMinuman;

    
    cout << "                BIODATA DIRI " << endl;
    cout << "======================================================" << endl;

    cout << "Masukan Nama        : " << masukanname << endl;
    cout << "Masukan Nim         : " << masukannim << endl;
    cout << "Masukan Kelas       : " << masukankelas << endl;
cout << "Semester            : " << semester << endl;
    cout << "Masukan IPK         : " << masukanipk << endl;
   

    cout << "======================================================" << endl;

    return 0;
}
