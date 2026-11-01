#include <iostream>
using namespace std;

int main() {
	string nama, nim;
	int masnilai;
	
	cout << "Nama:" ;
	cin >> nama;
	cout << "Nim:" ;
	cin >> nim;
	
	cout << "Masukan Nilai (0-100):";
	cin >> masnilai;
	switch (masnilai/10){
case 10:
	case 9:
cout<<"Grade A";
break;

case 8:
            cout << "\nGrade B";
            break;
        case 7:
            cout << "Grade C";
            break;
        case 6:
            cout << "\nGrade D";
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            cout << "\nGrade E " ;
            break;
        default:
            cout << "Nilai tidak valid!";
        }
return 0;
}
