#include <iostream>
using namespace std;
int main(){
int nomorhari;

cout<<"Masukkan nomor hari (1..7): ";
cin>>nomorhari;

switch (nomorhari){
case 1:
cout<<"Hari ke-"<<nomorhari<<"  MINGGU";
break;
case 2:
cout<<"Hari ke-"<<nomorhari<<"  SENIN";
break;
case 3:
cout<<"Hari ke-"<<nomorhari<<"  SELASA";
break;
case 4:
cout<<"Hari ke-"<<nomorhari<<"  RABU";
break;
case 5:
cout<<"Hari ke-"<<nomorhari<<"  KAMIS";
break;
case 6:
cout<<"Hari ke-"<<nomorhari<<"  JUMAT";
break;
case 7:
cout<<"Hari ke-"<<nomorhari<<"  SABTU";
break;
default:
cout<<"Tidak terdapat nama hari ke-"<<nomorhari;
}
return 0;
}
