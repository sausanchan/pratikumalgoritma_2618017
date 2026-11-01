#include<iostream>
using namespace std;

int main (){
	string nama, nim, persegi, perpa, segitiga;
	
	int pilbada, mapan, maleb, luas, panjang, lebar, alas, tinggi;
	
	cout <<"Masukan Nama:";
	cin >> nama;
	cout <<"Masukan Nim:";
	cin >> nim;
	cout << "\n== MENGHITUNG LUAS BANGUN DATAR ==";
	cout <<"\n1. Persegi";
	cout <<"\n2. Persegi Panjang";
	cout <<"\n3. Segitiga";
	
	cout <<"\nPilih bangun datar:";
	cin >> pilbada;
	
	cout <<"Masukan panjang:";
	cin >> mapan;
	
	
	cout << "Masukkan lebar: ";
        cin >> maleb;
	
	switch (pilbada){
	 case 1:
           

          luas = mapan * maleb ;
            cout << "Luas Persegi= " <<luas;
            break;
    case 2:
        
        

          luas = mapan * maleb ;

        cout << "Luas persegi panjang = " << luas;
        break;

    case 3:
       

        luas = 0.5 * mapan * maleb;

        cout << "Luas segitiga = " << luas;
        break;

    default:
        cout << "Pilihan tidak tersedia!";

		
	}
	return 0;
}
