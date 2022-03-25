#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main() {
  string pilih[2] = {"pertalite","pertamax"};
  string nama;
  int bayar ,harga, bensin;
  float liter, l, total, kembalian;


  cout << "Masukan Nama : ";
  getline(cin,nama);
  
  cout<<" Mesin Penghitung Jumlah Rupiah Per Liter Bensin \n";
  cout << "Bensin : "<<endl;
  cout << "0.pertalite"<<endl;
  cout << "1.Pertamax"<<endl;
  cout << "Pilih : ";
  cin >> bensin ;
  cout << "bayar = ";
  cin >> bayar;
  
  switch (bensin){
    case 0:
      cout<<" Silahkan Masukkan Jumlah Bensin Yang Anda Mau beli: \n";
    cin>> l;
    total = l * 7000;
    kembalian = bayar - total;
    break;

    
    case 1:
      cout << " Silahkan Masukkan Jumlah Bensin Yang Anda Mau beli: \n";
      cin >> l;
      total = l * 9000; 
      kembalian = bayar - total;
      break;

    default:
    cout<<" Tolong Masukan yang ada di list ";
  }


  cout << "output : "<<endl;
  cout << "Total liter : "<< l <<endl;
  cout << "Jenis Bensin : "<< pilih[bensin]<<endl;
  cout << "Nama Pelanggan : "<<nama<<endl; 
  cout << "Total Harga : "<<total<<endl;
    

  return 0;
}
