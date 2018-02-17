#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
char cobalagi = 'Y';
int pilih;
float panjang, lebar, tinggi, alas, sisi, luas;
while(cobalagi == 'Y');
{
system("cls");
cout << "Pilih luas" << endl;
cout << "1. Luas Segitiga" << endl;
cout << "2. Luas Persegi" << endl;
cout << "3. Luas Persegi Panjang" << endl;
cout << "Pilihan anda = " << endl;
cin >> pilih;
if(pilih == 1)
{
cout << "Masukkan alas = " << endl; cin>> alas;
cout << "Masukkan tinggi = " << endl; cin>> tinggi;
luas = (alas * tinggi) / 2;
cout << "Luas = " << luas << endl;
}
else if(pilih == 2)
{
cout << "Masukkan sisi = " << endl; cin>> sisi;
luas = pow(sisi, 2);
cout << "Luas" << luas << endl;
}
else if(pilih == 3)
{
cout << "Masukkan panjang = " << endl; cin>> panjang;
cout << "Masukkan lebar = " << endl; cin>> lebar;
luas = panjang * lebar;
cout << "Luas" << luas << endl;
}
else
{
cout << "Maaf, pilihan anda tidak ada di daftar menu" << endl;
}
cout << "Apakah anda ingin mengulangi lagi? (Y/N)" << luas << endl; cin >> cobalagi;
}
getch();
return 0;
}
