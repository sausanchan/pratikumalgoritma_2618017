#include <iostream>
using namespace std;
int main() 

{
	
	int masukanjarijaritabung;
	int masukantinggitabung;
	int volumetabungadalah;
	
	cout << "=== Program Menghitung Volume Tabung ===" << endl;
	
	cout << "Masukan Jari-jari tabung :" ;
	cin >> masukanjarijaritabung;
	
	cout << "Masukan Tinggi tabung     :" ;
	cin >> masukantinggitabung;
	
 volumetabungadalah = 3.14 * masukanjarijaritabung * masukanjarijaritabung * masukantinggitabung;

	
	cout << "Volume tabungadalah:" << volumetabungadalah << endl;
	
	
	return 0;
	
}
