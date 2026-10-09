#include <iostream>
using namespace std;
int main()
{
	int masukannilaipertama;
	int masukanbilangankedua;
	


cout << "Masukan Bilangan pertama : " ;
cin >> masukannilaipertama;

cout << "Masukan Bilangan kedua   : " ;
cin >> masukanbilangankedua;

  if ((masukannilaipertama > 60) & (masukanbilangankedua > 60)){
        cout << "Selamat Anda, LULUS! "  << endl;
    } 
 else {
            cout << "Maaf Anda Tidak LULUS! "  << endl;   
            }

return 0;
}
